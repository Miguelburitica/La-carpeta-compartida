import pygame,sys
from pygame.locals import *
from random import randint
#variables globales
ancho = 900
alto = 480


class Invasor(pygame.sprite.Sprite):
    def __init__(self, posx, posy, distancia):
        pygame.sprite.Sprite.__init__(self)

        self.imagenAInvasor = pygame.image.load("Imagenes/Enemigo/1.png")
        self.imagenBInvasor = pygame.image.load("Imagenes/Enemigo/2.png")
        self.imagenCInvasor = pygame.image.load("Imagenes/Enemigo/3.png")
        self.imagenDInvasor = pygame.image.load("Imagenes/Enemigo/4.png")
        self.imagenEInvasor = pygame.image.load("Imagenes/Enemigo/5.png")
        self.imagenFInvasor = pygame.image.load("Imagenes/Enemigo/6.png")
        self.imagenGInvasor = pygame.image.load("Imagenes/Enemigo/7.png")
        self.imagenHInvasor = pygame.image.load("Imagenes/Enemigo/8.png")
        self.imagenIInvasor = pygame.image.load("Imagenes/Enemigo/9.png")
        self.imagenJInvasor = pygame.image.load("Imagenes/Enemigo/10.png")
        self.imagenKInvasor = pygame.image.load("Imagenes/Enemigo/11.png")
        self.imagenLInvasor = pygame.image.load("Imagenes/Enemigo/12.png")
        self.imagenMInvasor = pygame.image.load("Imagenes/Enemigo/13.png")
        self.imagenNInvasor = pygame.image.load("Imagenes/Enemigo/14.png")
        self.imagenOInvasor = pygame.image.load("Imagenes/Enemigo/15.png")
        self.imagenPInvasor = pygame.image.load("Imagenes/Enemigo/16.png")

        self.listaImagenesInvasor = [self.imagenAInvasor, self.imagenBInvasor, self.imagenCInvasor, self.imagenDInvasor, self.imagenEInvasor, self.imagenFInvasor, self.imagenGInvasor, self.imagenHInvasor, self.imagenIInvasor, self.imagenJInvasor, self.imagenKInvasor, self.imagenLInvasor, self.imagenMInvasor, self.imagenNInvasor, self.imagenOInvasor, self.imagenPInvasor,]
        self.posImagenInvasor = 0

        self.imagenInvasor = self.listaImagenesInvasor[self.posImagenInvasor]
        self.rect = self.imagenInvasor.get_rect()

        self.listaDisparo = []
        self.velocidad = 10
        self.rect.top = posy
        self.rect.left = posx

        self.rangoDisparo = 5
        self.tiempoCambio = 1

        self.derecha = True
        self.contador = 0
        self.Maxdescenso = self.rect.top + 40

        self.limiteDerecha = posx + distancia
        self.limiteIzquierda = posx - distancia
    def dibujar(self, superficie):
        self.imagenInvasor = self.listaImagenesInvasor[self.posImagenInvasor]
        superficie.blit(self.imagenInvasor, self.rect)

    def comportamiento(self, tiempo):
        self.__movimientos()

        self.__ataque()
        if self.tiempoCambio == tiempo:
            self.posImagenInvasor += 1
            self.tiempoCambio += 1

            if self.posImagenInvasor > len(self.listaImagenesInvasor)-1:
                self.posImagenInvasor = 0

    def __movimientos(self):
        if self.contador < 3:
            self.__movimientoLateral()
        else:
            self.__descenso()

    def __descenso(self):
        if self.Maxdescenso == self.rect.top:
            self.contador = 0
            self.Maxdescenso = self.rect.top + 40
        else:
            self.rect.top += 1

    def __movimientoLateral(self):
        if self.derecha == True:
            self.rect.left = self.rect.left + self.velocidad
            if self.rect.left > self.limiteDerecha:
                self.derecha = False

        else:
            self.rect.left = self.rect.left - self.velocidad
            if self.rect.left < self.limiteIzquierda:
                self.derecha = True

                self.contador += 1

    def __ataque(self):
        if (randint(0, 100) < self.rangoDisparo):
            self.__disparo()

    def __disparo(self):
        x,y = self.rect.center
        miProyectil = Proyectil(x, y, "Imagenes/disparob.jpg", False)
        self.listaDisparo.append(miProyectil)

class naveEspacial(pygame.sprite.Sprite):
    """Clase para las naves"""

    def __init__(self):
        pygame.sprite.Sprite.__init__(self)

        self.imagenANave = pygame.image.load("Imagenes/Nave_player/1.png")
        self.imagenBNave = pygame.image.load("Imagenes/Nave_player/2.png")
        self.imagenCNave = pygame.image.load("Imagenes/Nave_player/3.png")
        self.imagenDNave = pygame.image.load("Imagenes/Nave_player/4.png")
        self.imagenENave = pygame.image.load("Imagenes/Nave_player/5.png")
        self.imagenFNave = pygame.image.load("Imagenes/Nave_player/6.png")
        self.imagenGNave = pygame.image.load("Imagenes/Nave_player/7.png")
        self.imagenHNave = pygame.image.load("Imagenes/Nave_player/8.png")
        self.imagenINave = pygame.image.load("Imagenes/Nave_player/9.png")
        self.imagenJNave = pygame.image.load("Imagenes/Nave_player/10.png")
        self.imagenKNave = pygame.image.load("Imagenes/Nave_player/11.png")
        self.imagenLNave = pygame.image.load("Imagenes/Nave_player/12.png")
        self.imagenMNave = pygame.image.load("Imagenes/Nave_player/13.png")
        self.imagenNNave = pygame.image.load("Imagenes/Nave_player/14.png")
        self.imagenONave = pygame.image.load("Imagenes/Nave_player/15.png")
        self.imagenPNave = pygame.image.load("Imagenes/Nave_player/16.png")
        self.imagenQNave = pygame.image.load("Imagenes/Nave_player/17.png")
        self.imagenRNave = pygame.image.load("Imagenes/Nave_player/18.png")
        self.imagenSNave = pygame.image.load("Imagenes/Nave_player/19.png")
        self.imagenTNave = pygame.image.load("Imagenes/Nave_player/20.png")
        self.imagenUNave = pygame.image.load("Imagenes/Nave_player/22.png")
        self.imagenVNave = pygame.image.load("Imagenes/Nave_player/23.png")
        self.imagenWNave = pygame.image.load("Imagenes/Nave_player/24.png")
        self.imagenXNave = pygame.image.load("Imagenes/Nave_player/25.png")
        self.imagenYNave = pygame.image.load("Imagenes/Nave_player/26.png")
        self.imagenZNave = pygame.image.load("Imagenes/Nave_player/27.png")
        self.imagenAANave = pygame.image.load("Imagenes/Nave_player/28.png")
        self.imagenABNave = pygame.image.load("Imagenes/Nave_player/29.png")
        self.imagenACNave = pygame.image.load("Imagenes/Nave_player/30.png")
        self.imagenADNave = pygame.image.load("Imagenes/Nave_player/31.png")
        self.imagenAENave = pygame.image.load("Imagenes/Nave_player/32.png")
        self.imagenAFNave = pygame.image.load("Imagenes/Nave_player/33.png")
        self.imagenAGNave = pygame.image.load("Imagenes/Nave_player/34.png")
        self.imagenAHNave = pygame.image.load("Imagenes/Nave_player/35.png")
        self.imagenAINave = pygame.image.load("Imagenes/Nave_player/36.png")
        self.imagenAJNave = pygame.image.load("Imagenes/Nave_player/37.png")
        self.imagenAKNave = pygame.image.load("Imagenes/Nave_player/38.png")
        self.imagenALNave = pygame.image.load("Imagenes/Nave_player/39.png")
        self.imagenAMNave = pygame.image.load("Imagenes/Nave_player/40.png")
        self.imagenANNave = pygame.image.load("Imagenes/Nave_player/41.png")
        self.imagenAONave = pygame.image.load("Imagenes/Nave_player/42.png")
        self.imagenAPNave = pygame.image.load("Imagenes/Nave_player/43.png")
        self.imagenAQNave = pygame.image.load("Imagenes/Nave_player/44.png")
        self.imagenARNave = pygame.image.load("Imagenes/Nave_player/45.png")
        self.imagenASNave = pygame.image.load("Imagenes/Nave_player/46.png")
        self.imagenATNave = pygame.image.load("Imagenes/Nave_player/47.png")
        self.imagenAUNave = pygame.image.load("Imagenes/Nave_player/48.png")
        self.imagenAVNave = pygame.image.load("Imagenes/Nave_player/49.png")
        self.imagenAWNave = pygame.image.load("Imagenes/Nave_player/50.png")
        self.imagenAXNave = pygame.image.load("Imagenes/Nave_player/51.png")
        self.imagenAYNave = pygame.image.load("Imagenes/Nave_player/52.png")
        self.imagenAZNave = pygame.image.load("Imagenes/Nave_player/53.png")
        self.imagenBANave = pygame.image.load("Imagenes/Nave_player/54.png")
        self.imagenBBNave = pygame.image.load("Imagenes/Nave_player/55.png")
        self.imagenBCNave = pygame.image.load("Imagenes/Nave_player/56.png")
        self.imagenBDNave = pygame.image.load("Imagenes/Nave_player/57.png")
        self.imagenBENave = pygame.image.load("Imagenes/Nave_player/58.png")
        self.imagenBFNave = pygame.image.load("Imagenes/Nave_player/59.png")
        self.imagenBGNave = pygame.image.load("Imagenes/Nave_player/60.png")

        self.listaImagenesNave = [self.imagenANave, self.imagenBNave,  self.imagenCNave, self.imagenDNave, self.imagenENave, self.imagenFNave, self.imagenGNave, self.imagenHNave, self.imagenINave, self.imagenJNave, self.imagenKNave, self.imagenLNave, self.imagenMNave, self.imagenNNave, self.imagenONave, self.imagenPNave, self.imagenQNave, self.imagenRNave, self.imagenSNave, self.imagenTNave, self.imagenUNave, self.imagenVNave, self.imagenWNave, self.imagenXNave, self.imagenYNave, self.imagenZNave, self.imagenAANave, self.imagenABNave, self.imagenACNave, self.imagenADNave, self.imagenAENave, self.imagenAFNave, self.imagenAGNave, self.imagenAHNave, self.imagenAINave, self.imagenAJNave, self.imagenAKNave, self.imagenALNave, self.imagenAMNave, self.imagenANNave, self.imagenAONave, self.imagenAPNave, self.imagenAQNave, self.imagenARNave, self.imagenASNave, self.imagenATNave, self.imagenAUNave, self.imagenAVNave, self.imagenAWNave, self.imagenAXNave, self.imagenAYNave, self.imagenAZNave, self.imagenBANave, self.imagenBBNave, self.imagenBCNave, self.imagenBDNave, self.imagenBENave, self.imagenBFNave, self.imagenBGNave,]
        self.posImagenNave = 0

        self.imagenNave = self.listaImagenesNave[self.posImagenNave]
        self.rect = self.imagenNave.get_rect()

        self.rect = self.imagenNave.get_rect()
        self.rect.centerx = ancho / 2
        self.rect.centery = alto - 30

        self.listaDisparo = []
        self.Vida = True

        self.velocidad = 20
        self. tiempoCambio = 1

        self.sonidoDisparo = pygame.mixer.Sound("Sonidos/disparo.wav")
    def movimientoDerecha(self):
            self.rect.right += self.velocidad
            self.__movimiento()

    def movimientoIzquierda(self):
            self.rect.left -= self.velocidad
            self.__movimiento()

    def comportamiento(self, tiempo):

        if self.tiempoCambio == tiempo:
            self.posImagenNave += 1
            self.tiempoCambio += 1

            if self.posImagenNave > len(self.listaImagenesNave)-1:
                self.posImagenNave = 0

    def __movimiento(self):

        if self.Vida == True:
            if self.rect.left <= 0:
                self.rect.left = 0
            elif self.rect.right > 870:
                self.rect.right = 840

    def disparar(self, x, y):
        miProyectil = Proyectil.Proyectil(x, y, "Imagenes/disparoa.jpg", True)
        self.listaDisparo.append(miProyectil)
        self.sonidoDisparo.play()
    def dibujar(self, superficie):
        superficie.blit(self.imagenNave, self.rect)

class Proyectil(pygame.sprite.Sprite):

    def __init__(self, posx, posy, ruta, personaje):
        pygame.sprite.Sprite.__init__(self)

        self.imageProyectil = pygame.image.load(ruta)

        self.rect = self.imageProyectil.get_rect()

        self.velocidadDisparo = 5

        self.rect.top = posy
        self.rect.left = posx

        self.disparoPersonaje = personaje

    def trayectoria(self):
        if self.disparoPersonaje == True:
            self.rect.top = self.rect.top - self.velocidadDisparo
        else:
            self.rect.top = self.rect.top + self.velocidadDisparo

    def dibujar(self, superficie):
        superficie.blit(self.imageProyectil, self.rect)

'''

def cargarEnemigos():
    posx = 100
    for x in range(1, 5):
        enemigo = Invasor(posx, 100, 40, 'MarcianoA.jpg', 'MarcianoB.jpg')
        listaEnemigo.append(enemigo)
        posx = posx + 200
    posx = 100
    for x in range(1, 5):
        enemigo = Invasor(posx, 0, 40, 'Marciano2A.jpg', 'Marciano2B.jpg')
        listaEnemigo.append(enemigo)
        posx = posx + 200
    posx= 100
    for x in range(1,5):
        enemigo = Invasor(posx, -100, 40, 'Marciano3A.jpg', 'Marciano3B.jpg')
        listaEnemigo.append(enemigo)
        posx = posx + 200
'''
def SpaceInvader():
    pygame.init()
    ventana = pygame.display.set_mode((ancho, alto))
    pygame.display.set_caption("Space Invader")

    ImagenFondo = pygame.image.load("Imagenes/Fondo.jpg")

    pygame.mixer.music.load("Sonidos/intro.mp3")
    pygame.mixer.music.play(3)

    jugador = naveEspacial()
    #cargarEnemigos()

    enJuego = True

    reloj = pygame.time.Clock()
    while True:

        reloj.tick(60)

        #jugador.movimiento()

        tiempo = int(pygame.time.get_ticks()/1000)

        for evento in pygame.event.get():
            if evento.type == QUIT:
                pygame,quit()
                sys.exit()
            if enJuego == True:
                if evento.type == pygame.KEYDOWN:
                    if evento.key == K_LEFT:
                        jugador.movimientoIzquierda()

                    elif evento.key == K_RIGHT:
                        jugador.movimientoDerecha()

                    elif evento.key == K_s:
                        x, y = jugador.rect.center
                        jugador.disparar(x, y)

        ventana.blit(ImagenFondo, (0,0))
        jugador.comportamiento(tiempo)
        jugador.dibujar(ventana)

        if len(jugador.listaDisparo) > 0:
            for x in jugador.listaDisparo:
                x.dibujar(ventana)
                x.trayectoria()

                if x.rect.top < -10:
                    jugador.listaDisparo.remove(x)
                else:
                    for enemigo in listaEnemigo:
                        if x.rect.colliderect(enemigo.rect):
                            listaEnemigo.remove(enemigo)
                            jugador.listaDisparo.remove(x)

        if len(listaEnemigo) > 0:
            for enemigo in listaEnemigo:
                enemigo.comportamiento(tiempo)
                enemigo.dibujar(ventana)

                if enemigo.rect.colliderect(jugador.rect):
                    pass


                if len(enemigo.listaDisparo) > 0:
                    for x in enemigo.listaDisparo:
                        x.dibujar(ventana)
                        x.trayectoria()
                        if x.rect.colliderect(jugador.rect):
                            pass

                        if x.rect.top > 900:
                            enemigo.listaDisparo.remove(x)
                        else:
                            for disparo in jugador.listaDisparo:
                                if x.rect.colliderect(disparo.rect):
                                    jugador.listaDisparo.remove(disparo)
                                    enemigo.listaDisparo.remove(x)

        pygame.display.update()

SpaceInvader()
