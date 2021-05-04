'''Q = float(input())
P1 = float(input())
P2 = float(input())
B = input()
Q *= 0.4
P1 *= 0.3
P2 *= 0.3
notaFinal = Q + P1 + P2
if B == 's':
    dec = double(input())
    notaFinal += dec
if notaFinal >= 2.96:
    print("Pasa")
else:
    print("Repite")'''

m = int(input())
n = int(input())
suma = 0
i = m
while i >= m and i <= n:
    if i % 2 != 0:
        print(i)
        suma += i
    i += 1
print(f"SUMA: {suma}")
