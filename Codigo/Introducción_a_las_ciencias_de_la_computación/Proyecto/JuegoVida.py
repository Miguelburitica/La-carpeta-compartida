import pygame
import time

def zeros(n):
    l = n[0]
    k = n[1]
    B = []
    A = []
    for i in range(0, l):
        A.append(0)
    for j in range(0, k):
        B.append(A)
    return B

def copy(A):
    B = []
    for i in A:
        B.append(i)
    return B

def flur(A):
    cont = 0
    B = []
    if type(A) == list:
        for i in A:
            if type(i) == list:
                for j in i:
                    j = int(j)
                    j = float(j)
                    i[cont] = j
                    cont += 1
            else:
                i = int(i)
                i = float(i)
                A[cont] = i
                cont += 1
            cont = 0
            B.append(i)
    else:
        A = int(A)
        A = float(A)
        B = A
    return B

pygame.init()

width, height = 1000, 1000
screen = pygame.display.set_mode((height, width))

bg = 25, 25, 25
screen.fill(bg)

nxC = 100
nyC = 100

dimCW = width / nxC
dimCH = height / nyC

gameState = zeros(nxC, nyC)

gameState[21][21] = 1
gameState[22][22] = 1
gameState[22][23] = 1
gameState[21][23] = 1
gameState[20][23] = 1

pauseExect = False

clock = pygame.time.Clock()

while True:

    newGameState = copy(gameState)

    screen.fill(bg)
    #time.sleep(0.000000000000000000000000001)


    ev = pygame.event.get()

    for event in ev:
        if event.type == pygame.KEYDOWN:
            pauseExect = not pauseExect

        mouseClick = pygame.mouse.get_pressed()


    for y in range(0, nxC):
        for x in range(0, nyC):

            if not pauseExect:

                n_neigh = gameState[(x - 1) % nxC][(y - 1) % nyC] + \
                          gameState[(x)     % nxC][(y - 1) % nyC] + \
                          gameState[(x + 1) % nxC][(y - 1) % nyC] + \
                          gameState[(x - 1) % nxC][(y)     % nyC] + \
                          gameState[(x + 1) % nxC][(y)     % nyC] + \
                          gameState[(x - 1) % nxC][(y + 1) % nyC] + \
                          gameState[(x)     % nxC][(y + 1) % nyC] + \
                          gameState[(x + 1) % nxC][(y + 1) % nyC]

                if gameState[x][y] == 0 and n_neigh == 3:
                    newGameState[x][y] = 1

                elif gameState[x][y] == 1 and (n_neigh > 3 or n_neigh < 2):
                    newGameState[x][y] = 0

            poly = [((x)   * dimCW, y * dimCH),
                    ((x+1) * dimCW, y * dimCH),
                    ((x+1) * dimCW, (y+1) * dimCH),
                    ((x)   * dimCW, (y+1) * dimCH)]

            if newGameState[x][y] == 0:
                pygame.draw.polygon(screen, (128, 128, 128), poly, 1)
            else:
                pygame.draw.polygon(screen, (255, 255, 255), poly, 0)


    gameState = copy(newGameState)

    clock.tick(60)

    pygame.display.flip()
