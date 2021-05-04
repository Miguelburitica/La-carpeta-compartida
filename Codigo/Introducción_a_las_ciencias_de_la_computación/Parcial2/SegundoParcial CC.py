import math
'''
#Inicio Primer punto:
def distanciaVectores(u, v, tamanio):
    resultado = 0
    i = 0
    while i < tamanio:
        resultado += (u[i] - v[i])**2
        i += 1
    return resultado**(1/2)
#Inicio de la lectura y captura de los vectores en el codigo

archivoDatos = open('datos.txt', 'r')
capturarVectores = archivoDatos.readlines()

v1txt = capturarVectores[1].split()
v2txt = capturarVectores[2].split()

v1 = []
v2 = []
tamanio = int(capturarVectores[0][0])

for i in range(0, tamanio):
    v1.append(int(v1txt[i]))
    v2.append(int(v2txt[i]))

archivoDatos.close()

#Fin de la lectura y captura de los vectores en el codigo

#Incio de la resolución y escritura de la distancia entre v1 y v2
archivoResultados = open('resultados.txt', 'w')
vector1 = '(' + str(v1[0])
vector2 = '(' + str(v2[0])

for i in range(1, tamanio):
    vector1 = vector1 +  ', ' + str(v1[i])
    vector2 = vector2 +  ', ' + str(v2[i])

distancia = distanciaVectores(v1, v2, tamanio)

vector2 = vector2 + ')'
vector1 = vector1 + ') y v2 = ' + vector2 + ' es: ' + str(distancia)

archivoResultados.write('La distancia entre los vectores v1 = %s' %vector1)

archivoResultados.close()
#Fin Primer punto
'''
'''
#Inicio Segundo punto
#Inicio funsión para calcular los puntos del poligono
def puntosPolygon(n, r, puntosx, puntosy):
    alpha = []
    delta = math.radians(360/n)
    for i in range(0, n):
        alpha.append(i * delta)
        i += 1
    i = 0
    for i in range(0, n):
        puntosx.append(math.cos(alpha[i])*r)
        puntosy.append(math.sin(alpha[i])*r)
#Fin funsión para calcular los puntos del poligono

#Inicio funsión para calcular el area del poligono
def areaPolygon(n, X, Y):
    delta = math.radians(360 / n)
    lado = ((X[1] - X[0])**2 + (Y[1] - Y[0])**2)**(1/2)
    ap = (lado)/(2*math.tan(delta/2))  #calculo la magnitud del apotema del poligono
    perimetro = 0
    k = 0
    for i in range(0, n):
        k += 1
        if k < n:               ###### calculo el perimetro de el poligono
            x2 = X[k]
            x1 = X[i]
            y2 = Y[k]
            y1 = Y[i]
            dx = (x2 - x1)**2
            dy = (y2 - y1)**2
            sumaDeltas = dx + dy
            lado = (sumaDeltas)**(1/2)
            perimetro += lado
        else:
            lado = ((X[0] - X[i])**2 + (Y[0] - Y[i])**2)**(1/2)
            perimetro += lado
    area = (ap*perimetro)/2
    return area
#Fin funsion para calcular el area del poligono
#Inicio programa principal
n = int(input("Ingresa la cantidad de lados del poligono: "))
r = int(input("Ingresa la la distancia desde el centro del poligono a el primer punto: "))

puntosx = []                                            #Las listas donde capturares los valores x y y.
puntosy = []

puntosPolygon(n, r, puntosx, puntosy)          #capturo todas las cordenadas x y y en distintas listas.

print("      x             y")
for i in range(0, n):
  dotx = puntosx[i]
  doty = puntosy[i]
  print('{2}{0:10f}{2} {2}{1:10f}{2}'.format(dotx, doty,'|'))


print("El area es: ", areaPolygon(n, puntosx, puntosy)) # para luego utilizarlos para calcular el area.
#Fin programa principal
#Fin punto Segundo punto
'''
'''
#Inicio tercer punto
#Inicio

#Fin
#Fin tercer punto
'''

#Inicio cuarto punto
def fiboMenos10EnParcial(n):
    if n == 1 or n == 2 or n == 3:
        x = 1
        return x
    elif n > 3:
        v = fiboMenos10EnParcial(n-1) + fiboMenos10EnParcial(n-2) + fiboMenos10EnParcial(n-3)
        return v

n = int(input("Ingresa la cantidad de valores que deseas ver: "))
for i in range(1, n+1):
    menosDiez = fiboMenos10EnParcial(i)
    #menosDiez.append(fiboMenos10EnParcial(i))
    print(menosDiez)
#Fin cuarto punto
