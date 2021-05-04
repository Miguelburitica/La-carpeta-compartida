'''
n = int(input())
c = ''
for i in range(0, n):
    c += input()
print(c)

-----------

c = input()
ch = input()
cont = 0
for i in c:
    if ch == i:
        cont += 1
print(cont)

----------

A = input()
S = input()
n = len(A)
cont = 0
j = 0
for i in A:
    if S[j] == i:
        cont += 1
    j += 1
k = (n//2)+1
print(cont)
if cont >= k:
    print("Si")
else:
    print("No")

----------
'''

#primer punto espejo
#in = Daniela
#out = Daniel_leinaD
#------

#hacer segura una contraseñas
# a = 4, e = 3, i = !, o = 0, mayuscula <=> minuscula (cambiar), numero se deja igual, y al final de hacer los cambios, se hace espejo.
