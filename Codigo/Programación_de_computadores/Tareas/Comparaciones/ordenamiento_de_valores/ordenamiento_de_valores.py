x = int(input("Ingresa tu primer valor: "))
y = int(input("Ingresa tu segundo valor: "))
z = int(input("Ingresa tu tercer valor: "))

if x >= y and y >= z:
    print("Descendentemente hacia abajo");print(x);print(y);print(z)
elif x >= z and z >= y:
    print("Descendentemente hacia abajo");print(x);print(z);print(y)
elif y >= x and x >= z:
    print("Descendentemente hacia abajo");print(y);print(x);print(z)
elif y >= z and z >= x:
    print("Descendentemente hacia abajo");print(y);print(z);print(x)
elif z >= x and x >= y:
    print("Descendentemente hacia abajo");print(z);print(x);print(y)
elif z >= y and y >= x:
    print("Descendentemente hacia abajo");print(z);print(y);print(x)
