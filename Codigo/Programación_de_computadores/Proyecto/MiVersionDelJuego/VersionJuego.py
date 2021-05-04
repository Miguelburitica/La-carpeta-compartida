import pygame,sys
from pygame.locals import *
from random import randint

pygame.init()
ancho = 1280
alto = 720
tamaño = (ancho, alto)

screen = pygame.display.set_mode(tamaño)

ImagenFondo = pygame.image.load("Imagenes/Fondo.jpg")

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

listaImagenesNave = [self.imagenANave, self.imagenBNave,  self.imagenCNave, self.imagenDNave, self.imagenENave, self.imagenFNave, self.imagenGNave, self.imagenHNave, self.imagenINave, self.imagenJNave, self.imagenKNave, self.imagenLNave, self.imagenMNave, self.imagenNNave, self.imagenONave, self.imagenPNave, self.imagenQNave, self.imagenRNave, self.imagenSNave, self.imagenTNave, self.imagenUNave, self.imagenVNave, self.imagenWNave, self.imagenXNave, self.imagenYNave, self.imagenZNave, self.imagenAANave, self.imagenABNave, self.imagenACNave, self.imagenADNave, self.imagenAENave, self.imagenAFNave, self.imagenAGNave, self.imagenAHNave, self.imagenAINave, self.imagenAJNave, self.imagenAKNave, self.imagenALNave, self.imagenAMNave, self.imagenANNave, self.imagenAONave, self.imagenAPNave, self.imagenAQNave, self.imagenARNave, self.imagenASNave, self.imagenATNave, self.imagenAUNave, self.imagenAVNave, self.imagenAWNave, self.imagenAXNave, self.imagenAYNave, self.imagenAZNave, self.imagenBANave, self.imagenBBNave, self.imagenBCNave, self.imagenBDNave, self.imagenBENave, self.imagenBFNave, self.imagenBGNave]

posImagenNave = 1

imagenNave = listaImagenesNave[posImagenNave]
self.rect = imagenNave.get_rect()

while True:
    for event in pygame.event.get():
        #print(event)
        if event.type == pygame.QUIT:
            sys.exit()
        if enJuego == True:
            if evento.type == pygame.KEYDOWN:
                if evento.key == K_LEFT:
                    jugador.movimientoIzquierda()

                elif evento.key == K_RIGHT:
                    jugador.movimientoDerecha()

                elif evento.key == K_UP:
                    jugador.movimientoArriba()

                elif evento.key == K_DOWN:
                    jugador.movimientoAbajo()
    screen.blit(ImagenFondo, (0,0))
    superficie.blit(self.imagenNave, self.rect)
