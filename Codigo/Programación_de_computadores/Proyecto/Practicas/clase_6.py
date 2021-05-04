import pygame
import sys
from random import randint

from pygame.locals import *

pygame.init()
tamaño_x = 1280
tamaño_y = 720
size = (tamaño_x,tamaño_y) #tamaño
screen = pygame.display.set_mode(size)
pygame.display.set_caption("tutorial 6")
direccion = 1
rectangulo_2 = pygame.Rect(300, 300, 100, 50)
posx = 200
posy = 100
velocidad = 2
color_fav = (21, 160, 160)
color_complemento_de_fav_1 = (160, 160, 21)

rectangulo = pygame.Rect(0, 0, 100, 50)
while True:
    screen.fill(color_fav)
    pygame.draw.rect(screen,(color_complemento_de_fav_1), rectangulo_2)

    pygame.draw.rect(screen,(color_complemento_de_fav_1), rectangulo)
    rectangulo.left, rectangulo.top = pygame.mouse.get_pos()

    if rectangulo.colliderect(rectangulo_2):
        velocidad = 0

    for event in pygame.event.get():
        #print(event)}

        if event.type == QUIT:
            pygame.quit()
            sys.exit()

    if direccion == 1:
        posx += velocidad
        rectangulo_2.left = posx

    elif direccion == 2:
        posx -= velocidad
        rectangulo_2.left = posx

    if posx >= 1211:
        direccion = 2

    elif posx <= 0:
        direccion = 1
    pygame.display.update()
