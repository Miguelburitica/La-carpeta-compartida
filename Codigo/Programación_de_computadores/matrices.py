def zeros(n):
    A = []
    B = []
    for i in range(0, n):
        A.append(0)
    for j in range(0, n):
        B.append(A)
    return B

#segundo
n = int(input())
k = 0
A = zeros(n)

for i in range(0, n):
    print(k)
    for j in range(0, n):
        k += 1
        print(k)
        A[i][j] = k

print(A)
