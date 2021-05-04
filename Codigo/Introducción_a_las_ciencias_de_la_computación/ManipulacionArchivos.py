k = open( 'Vectores.txt', 'w')


f = open( 'Vectores.txt','r')
V = f.readlines() # En este caso V es una lista de lineas

Vec1 = V[1].split() # .split() conforma una lista con las palabras de otra lista 
Vec2 = V[2].split() # donde cada palabra corresponde a la secuencia de símbolos
                    # que se envuetran entre espacios en blanco.
v1 = []
v2 = []
Suma = []
n = int(V[0][0]) 
for i in range(0,n):
    v1.append(int(Vec1[i])) 
    v2.append(int(Vec2[i]))
    Suma.append(v1[i]+v2[i])
print(v1,"+",v2,"=",Suma)    