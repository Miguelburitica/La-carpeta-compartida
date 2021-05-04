
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
    v1.append(int(v1txt))
    v2.append(int(v2txt))

archivoDatos.close( 'datos.txt', 'r')

#Fin de la lectura y captura de los vectores en el codigo

#Incio de la resolución y escritura de la distancia entre v1 y v2

archivoResultados = open('resultados.txt', 'w')

for i in range(0, tamanio):
    vector1 = vector1 + string(v1[i]) + ', '
    vector2 = vector2 + string(v2[i]) + ', '

vector1 = '(' + vector1 + ')'
vector2 = '(' + vector2 + ')'

distancia = distanciaVectores(v1, v2, tamanio)

archivoResultados.write('La distancia entre los vectores v1 = %s y v2 = %s es: %float' %vector1 %vector2 %distancia)

archivoResultados.close()
