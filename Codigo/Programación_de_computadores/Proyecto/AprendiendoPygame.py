import pygame
import sys

pygame.init()
tamaño_x = 800
tamaño_y = 600
size = (tamaño_x,tamaño_y) #tamaño

screen = pygame.display.set_mode(size) #creamos ventana de juego
color_fav = (21, 160, 160)
color_complemento_de_fav_1 = (160, 160, 21)
color_complemento_de_fav_2 = (160, 21, 160)
color_blanco = (160, 160, 160)
color_negro = (0, 0, 0)
punto_x_circulo = 260
punto_y_circulo = 460
punto_x_cuadrado = 500
punto_y_cuadrado = 100
radio = 40
direccion_x = 1 #si es uno mueve derecha, si es dos mueve izquierda
direccion_y = 1
mi_imagen = pygame.image.load("Ovni.png")
Posicion_ovni = (200,100)

screen.blit(mi_imagen,(Posicion_ovni))

clock = pygame.time.Clock()

while True:
    for event in pygame.event.get():
        #print(event)
        if event.type == pygame.QUIT:
            sys.exit()
        #colores en sistema RGB del 1 - 255
    screen.fill((color_fav))
    pygame.draw.line(screen, color_complemento_de_fav_1, [0,0], [tamaño_x, tamaño_y], 5)
    pygame.draw.rect(screen, color_complemento_de_fav_2, (punto_x_cuadrado, punto_y_cuadrado, 80, 80))
    #pygame.draw.polygon(screen, color_complemento_de_fav_2,((140, 0), (291,106), (237,277),(56,277),(0,106)))
    pygame.draw.circle(screen, color_blanco, [punto_x_circulo, punto_y_circulo], radio)
    borde_x_circulo_l = punto_x_circulo - radio
    borde_x_circulo_r = punto_x_circulo + radio
    borde_y_circulo_t = punto_y_circulo - radio
    borde_y_circulo_b = punto_y_circulo + radio
        #eje X
    if direccion_x == 1:
        punto_x_circulo += 15
    elif direccion_x == 2:
        punto_x_circulo -= 15
    if borde_x_circulo_r > tamaño_x:
        direccion_x = 2
    elif borde_x_circulo_l < 0:
        direccion_x = 1
        #eje Y
    if direccion_y == 1:
        punto_y_circulo += 3
    elif direccion_y == 2:
        punto_y_circulo -= 3
    if borde_y_circulo_b > tamaño_y:
        direccion_y = 2
    elif borde_y_circulo_t < 0:
        direccion_y = 1

    punto_x_cuadrado += -1
    punto_y_cuadrado += 1
    pygame.display.flip()
    clock.tick(60)
