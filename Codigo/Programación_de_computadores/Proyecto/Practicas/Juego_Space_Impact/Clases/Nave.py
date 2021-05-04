import pygame
import Proyectil

class naveEspacial(pygame.sprite.Sprite):
    """Clase para las naves"""

    def __init__(self, ancho, alto):
        pygame.sprite.Sprite.__init__(self)
        self.ImagenNave = pygame.image.load("nave.jpg")

        self.rect = self.ImagenNave.get_rect()
        self.rect.centerx = ancho / 2
        self.rect.centery = alto - 30

        self.listaDisparo = []
        self.Vida = True

        self.velocidad = 20

        self.sonidoDisparo = pygame.mixer.Sound("disparo.wav")
    def movimientoDerecha(self):
            self.rect.right += self.velocidad
            self.__movimiento()

    def movimientoIzquierda(self):
            self.rect.left -= self.velocidad
            self.__movimiento()

    def __movimiento(self):
        if self.Vida == True:
            if self.rect.left <= 0:
                self.rect.left = 0
            elif self.rect.right > 870:
                self.rect.right = 840

    def disparar(self, x, y):
        miProyectil = Proyectil.Proyectil(x, y, "disparoa.jpg", True)
        self.listaDisparo.append(miProyectil)
        self.sonidoDisparo.play()
    def dibujar(self, superficie):
        superficie.blit(self.ImagenNave, self.rect)
