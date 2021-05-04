i = 0

def setup():
    size(500, 500)
    background(0)
    stroke(0,0,0)
    fill(10,150,180)
    circle(250,250,200)
    fill(10, 180, 150)
    circle(250,250,100)
    

def draw():
    rectangulos()
    
def rectangulos():
    delay(200)
    global i
    if i <= 43:
        noFill()
        circle(cos(i)*50+250,sin(i)*50+250,100)
        i += 1
    else:
        print("terminamos")
        noLoop()
    
