import pygame,sys
from pygame.locals import *

pygame.init()
ventana = pygame.display.set_mode((800, 600))
pygame.display.set_caption("Capitulo 12")

mifuente = pygame.font.Font(None, 30)
miTexto = mifuente.render("Comer sandwich",0 ,(120, 60, 60), (255, 255, 255))
mifuentesistema = pygame.font.SysFont("Verdana", 30)
mitexto = mifuentesistema.render("Comer sandwich con sal",0 ,(120, 60, 60), (255, 255, 255))
while True:
    for event in pygame.event.get():
        if event.type == QUIT:
            pygame,quit()
            sys.exit()
    ventana.blit(mitexto, (0, 0))
    ventana.blit(miTexto, (100, 100))
    pygame.display.update()
