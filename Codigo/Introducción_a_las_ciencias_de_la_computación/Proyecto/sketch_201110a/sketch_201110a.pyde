# Number of columns and rows in the grid
nCols = 10;
nRows = 10;
def setup():
    global nCols, nRows, grid
    size(200,200)
    grid = makeGrid()
    for i in xrange(nCols):
        for j in xrange(nRows):
            # Initialize each object
            grid[i][j] = Cell(i*20,j*20,20,20,i+j)
        
def draw():
    global nCols, nRows, grid
    background(0)
    # The counter variables i and j are also the column and row numbers and 
    # are used as arguments to the constructor for each object in the grid.  
    for i in xrange(nCols):
        for j in xrange(nRows):
            # Oscillate and display each object
            grid[i][j].oscillate()
            grid[i][j].display()
    
# Creates a 2D List of 0's, nCols x nRows large
def makeGrid():
    global nCols, nRows
    grid = []
    for i in xrange(nCols):
        # Create an empty list for each row
        grid.append([])
        for j in xrange(nRows):
            # Pad each column in each row with a 0
            grid[i].append(0)
    return grid

# A Cell object
class Cell():
    # A cell object knows about its location in the grid 
    # it also knows of its size with the variables x,y,w,h.
    def __init__(self, tempX, tempY, tempW, tempH, tempAngle):
        self.x = tempX
        self.y = tempY
        self.w = tempW
        self.h = tempH
        self.angle = tempAngle
    
    # Oscillation means increase angle
    def oscillate(self):
        self.angle += 0.02;
        
    def display(self):
        stroke(255)
        # Color calculated using sine wave
        fill(127+127*sin(self.angle))
        rect(self.x,self.y,self.w,self.h)
