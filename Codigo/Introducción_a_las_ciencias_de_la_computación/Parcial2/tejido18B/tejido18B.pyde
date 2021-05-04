i = 0
j = 0
l = 0
k = 0
m = 0
n = 0
o = 0
p = 6
def setup():
    size(500, 500)
    background(255)
    

def draw():
    if o <= 24:
        puntos()
    elif m <= 48:
        lineaUno()
    elif l <= 48:
        lineaDos()
    elif i <= 48 :
        lineaTres()

def puntos():
    global o
    global p
    delay(50)
    stroke(0)
    if o <= 24:
        circle(10, 490, p)
        circle(490, 490, p)
        circle(250, 10, p)
        o += 1
        p -= 0.25
    else:
        print("Terminados los puntos")
        noloop()
    

def lineaUno():
    #delay(100)
    global m
    global n
    stroke(10, 200, 10)
    if m <= 48:
        line( 10 + (n/2), 490 - n, 250 + (n/2), 10 + n)
        m += 1
        n += 10
    else:
        print("terminamos línea tres")
        noLoop()

def lineaDos():
    #delay(100)
    global l
    global k
    stroke(200, 10, 10)
    if l <= 48:
        line(490 - k, 490, 250 + (k/2), 10 + k)
        l += 1
        k += 10
    else:
        print("terminamos línea dos")
        noLoop()
        
def lineaTres():
    #delay(100)
    global j
    global i
    stroke(10, 10, 200)
    if i <= 48:
        line(490 - j, 490, 10 + (j/2), 490 - j)
        i += 1
        j += 10
    else:
        print("terminamos línea uno")
        noLoop()
    
