n = int(input())
cont = 0
acumulador = 0
i = 1
j = 1
while i <= n:
    if (i%2)  != 0:
        while j <= i:
            if i%j == 0 and cont <= 2:
                cont += 1
            j += 1
        if cont == 2:
            acumulador += i
        cont = 0
        j = 1
        i += 1
    else:
        i += 1
    if acumulador %2 != 0:
        print(acumulador + 1)
        print("powodzenia")
    else:
        print(acumulador)
