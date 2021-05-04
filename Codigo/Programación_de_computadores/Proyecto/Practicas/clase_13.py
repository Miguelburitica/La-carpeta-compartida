import pygame,sys
from pygame.locals import *

pygame.init()
ventana = pygame.display.set_mode((800, 600))
pygame.display.set_caption("Capitulo 12")

fuente = pygame.font.SysFont("Arial",30)

aux = 1
while True:

    tiempo = pygame.time.get_ticks()//1000
    if aux == tiempo:
        aux += 1
        print(tiempo)
    ventana.fill((60,60,180))

    for event in pygame.event.get():
        if event.type == QUIT:
            pygame,quit()
            sys.exit()
    contador = fuente.render("tiempo: "+str(tiempo),0,(180,60,60))
    ventana.blit((contador),(100,100))
    pygame.display.update()
