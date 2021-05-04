i = 0
def setup():
    size(500, 500)
    background(255) # Blanco para el fondo de la ventana
def draw():
    Segmentos()  
 
def Segmentos():
        global i #contador global;
        stroke(255,0,0)
        if i  <= 500:
             temporizador=millis()            
             line(500-i,0,0,i)
             temporizador=millis()
             i +=10
        else:
             print("Proceso Terminado...\n");
             noLoop();
