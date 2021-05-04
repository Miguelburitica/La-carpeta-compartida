x = int(input("Ingresa tu primer valor: "))
y = int(input("Ingresa tu segundo valor: "))
z = int(input("Ingresa tu tercer valor: "))

if x >= y and x >= z:
    print("El mayor valor es: ",x)
elif y >= x and y >= z:
    print("El mayor valor es: ",y)
else:
    print("El mayor valor es: ",z)
