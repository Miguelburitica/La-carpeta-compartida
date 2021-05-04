n = 25
nyC = 25
ancho = 1000
alto = 1000
dimCW = ancho / nxC
dimCH = alto / nyC

def setup():
    global ancho
    global alto
    size(ancho, alto)
    background(25)

def draw():
    dibujarCuadriculas()

def dibujarCuadriculas():
    global dimCH
    global dimCW
    global nxC
    global nyC
    for y in range(0, nxC):
        for x in range(0, nyc):
