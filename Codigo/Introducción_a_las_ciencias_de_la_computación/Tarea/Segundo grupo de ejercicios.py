'''10. Diseñe una función llamada Goldbach(n) que permita
verificar la conjetura de Goldbach
( https://es.wikipedia.org/wiki/Conjetura_de_Goldbach) para
$n=1020302$.
'''
def comprobadorPrimos(n):
    if n < 1:
        return False
    elif n == 2:
        return True
    else:
        for i in range(2, n):
            if n % i == 0:
                return False
        return True

m = int(input("Ingresa el numero que deseas comprobar: "))
k = m // 2
l = k
suma = 0
p = False
cont = 0

while suma != m:
    if k % 2 != 0 and l % 2 != 0:
        if k % 3 != 0 and l % 3 != 0:
            if k % 5 != 0 and l % 5 != 0:
                if comprobadorPrimos(k) and comprobadorPrimos(l):
                    k += 1
                    l -= 1
                    suma = l + k
                    if suma == m:
                        p = True
                else:
                    k += 1
                    l -= 1
            else:
                k += 1
                l -= 1
        else:
            k += 1
            l -= 1
    else:
        k += 1
        l -= 1
    cont += 1
    if cont > m//2:
        break
if p:
    print(f"Si, {m} si cumple la conjetura de golbach.")
    print("su suma es: ", suma)
    print(k-1)
    print(l+1)
else:
    print(f"No, {m} no cumple la conjetura de golbach.")
