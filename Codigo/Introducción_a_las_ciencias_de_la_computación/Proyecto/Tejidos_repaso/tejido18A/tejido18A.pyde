i = 0
j = 10
l = 0
k = 10
m = 0
n = 10
o = 0
p = 10
def setup():
    size(500, 500)
    background(255)
    

def draw():
    global i
    if i <= 23:
        capaExterior()
    elif l <= 23:
        capaExterior2a()
    elif m <= 23:
        figuraInterior()
        if m > 23:
            line(0, 250, 500, 250)
            line(250, 0, 250, 500)
    elif o <= 23:
        capaExterior2b()
    
def capaExterior():
    #delay(100)
    global j
    global i
    if i <= 23:
        stroke(10, 10, 180)
        line(0, 250 + j, j, 500)
        line(j, 0, 0, 250 - j)
        line(500 - j, 0, 500, 250 - j)
        line(500, 250 + j, 500 - j, 500)
        i += 1
        j += 10
def capaExterior2a():
    #delay(100)
    global k
    global l
    stroke(200, 10, 10)
    if l <= 23:
        line(0 + k, 250 - k, 250 + k, k)
        line(500 - k, 250 + k, 250 - k, 500 - k)
        l += 1
        k += 10
def figuraInterior():
    #delay(100)
    global n
    global m
    stroke(10, 60, 180)
    if m <= 25:
        line(250, n, 250 + n, 250)
        line(250, n, 250 - n, 250)
        line(250 + n, 250, 250, 500 - n)
        line(250 - n, 250, 250, 500 - n)
        m += 1
        n += 10
        
def capaExterior2b():
    #delay(100)
    global o
    global p
    stroke(200, 10, 10)
    if o <= 23:
        line(p, 250 - p, 250 - p, 500 - p)
        line(500 - p, 250 + p, 250 + p, 0 + p)
        o += 1
        p += 10        
    else:
        print("terminamos")
        noLoop()
    
