nxC = 25
nyC = 25
ancho = 1000
alto = 1000
dimCW = ancho / nxC
dimCH = alto / nyC

def zeros(n, m):
    A = []
    B = []
    for i in range(0, n):
        A.append(0)
    for j in range(0, m):
        B.append(A)
    return B

def copi(A):
    B = []
    for i in A:
        B.append(i)
    return B

def flur(A):
    cont = 0
    for i in A:
        for j in i:
            j = int(j)
            j = float(j)
            i[cont] = j
            cont += 1
        cont = 0
        B.append(i)
    return B

#Estado de la celdas. Vivas = 1; Muertas = 0
gameState = zeros(nxC, nyC)

def setup():
    global ancho
    global alto
    size(ancho, alto)
    background(25)

def draw():
    juegoDeLaVida()

def juegoDeLaVida():
    delay(100)
    global dimCH
    global dimCW
    global nxC
    global nyC
    for y in range(0, nxC):
        for x in range(0, nyC):
            n_neigh = gameState[(x - 1) % nxC][(y - 1) % nyC] + \
                      gameState[(x)     % nxC][(y - 1) % nyC] + \
                      gameState[(x + 1) % nxC][(y - 1) % nyC] + \
                      gameState[(x - 1) % nxC][(y)     % nyC] + \
                      gameState[(x + 1) % nxC][(y)     % nyC] + \
                      gameState[(x - 1) % nxC][(y + 1) % nyC] + \
                      gameState[(x)     % nxC][(y + 1) % nyC] + \
                      gameState[(x + 1) % nxC][(y + 1) % nyC]
            
            #vecinos
            if gameState[x][y] == 0 and (n_neigh == 3) :
                    newGameState[x][y] = 1

            elif gameState[x][y] == 1 and (n_neigh < 2 or n_neigh > 3):
                    newGameState[x][y] = 0
            
            noFill()
            stroke(255)
            quad((x)   * dimCW, y     * dimCH,
                (x+1)  * dimCW, y     * dimCH,
                (x+1)  * dimCW, (y+1) * dimCH,
                (x)    * dimCW, (y+1) * dimCH)
