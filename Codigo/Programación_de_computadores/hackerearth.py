# [n,m] contar de a uno ; n<m
#   SUMAR!
'''
print("INICIO Productoria")

n = int(input())
m = int(input())
Productoria = 1
if n < m:
    for i in range(n, m+1):
        Productoria *= i
    print(Productoria)
elif m <= n:
    for i in range(m, n+1):
        Productoria *= i
    print(Productoria)

print("FIN Productoria")

print("INICIO factorial")

k = int(input())
fact = 1

for i in range(1, k+1):
    if k == 0:
        print(1)
        break
    elif k == 1:
        print(1)
        break
    else:
        fact *= i

print(fact)

print("FIN factorial")

print("INICIO factorial * -1")

k = int(input())
fact = 1

for i in range(1, k+1):
    if k == 0:
        print(1)
        break
    elif k == 1:
        print(1)
        break
    else:
        fact *= k + 1 - i

print(fact)

print("FIN factorial * -1")
'''

print("INICIO combinatoria")

n = int(input())
m = int(input())
if n >= m:
    factn = 1

    for i in range(1, n+1):
        if n == 0:
            print(1)
            break
        elif n == 1:
            print(1)
            break
        else:
            factn *= i

    factm = 1

    for j in range(1, m+1):
        if m == 0:
            print(1)
            break
        elif m == 1:
            print(1)
            break
        else:
            factm *= j

    factn_m = 1
    n_m = n - m

    for l in range(1, n_m+1):
        if n_m == 0:
            print(1)
            break
        elif n_m == 1:
            print(1)
            break
        else:
            factn_m *= l

    Combinatoria = (factn/((factn_m)*factm))

    print(Combinatoria)
else:
    print("Incia de nuevo, el primer valor debe ser mayor que el primero. ")

'''
###########################
print("for")
for i in range(n,m+1):
    print(i)

print("FIN")
'''
