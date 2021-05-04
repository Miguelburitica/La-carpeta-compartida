import pygame,sys
from pygame.locals import *

pygame.init()
ventana = pygame.display.set_mode((800, 600))
pygame.display.set_caption("Capitulo 13")


while True:


    for event in pygame.event.get():
        if event.type == QUIT:
            pygame,quit()
            sys.exit()
    pygame.display.update()
