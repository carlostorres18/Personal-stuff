"""
    The game has 25 rows and 25 columns
    (0,0) starting block
    (625, 625) last block, so the height will be 625px
        and width will be 625px as well
    the TILE_SIZE is 25px
"""
import tkinter
import random

#constants
ROWS = 25
COLS = 25
TILE_SIZE = 25

WINDOW_WIDTH = TILE_SIZE * COLS
WINDOW_HEIGHT = TILE_SIZE * ROWS

class Tile:
    def __init__(self, x, y):
        self.x = x
        self.y = y

#game window
window = tkinter.Tk()
window.title("Snek")
window.resizable(False, False)

#canvas
canvas = tkinter.Canvas(window, bg = "black", width = WINDOW_WIDTH, height = WINDOW_HEIGHT, borderwidth = 0, highlightthickness = 0)
canvas.pack()
window.update()

#center the game window in our screen
window_width = window.winfo_width()
window_height = window.winfo_height()
screen_width = window.winfo_screenwidth()
screen_height = window.winfo_screenheight()

window_x = (screen_width - window_width) // 2
window_y = (screen_height - window_height) // 2

#how geometry works (lol) = "(w)*(h)+(x)*(y)"
window.geometry(f"{window_width}x{window_height}+{window_x}+{window_y}")

#initialize the game
snek = Tile(5*TILE_SIZE, 5*TILE_SIZE) #single tile for the snake's head
food = Tile(10*TILE_SIZE, 10*TILE_SIZE)
snek_body = [] #multiple snek tiles
velocityX = 0
velocityY = 0
game_over = False
score = 0

def change_direction(e): #e = event
    # print(e)
    # print(e.keysym)
    global velocityX, velocityY, game_over
    if(game_over):
        return
    
    if(e.keysym == "w" and velocityY != 1):
        velocityX = 0
        velocityY = -1
    elif(e.keysym == "s" and velocityY != -1):
        velocityX = 0
        velocityY = 1
    elif(e.keysym == "a" and velocityX != 1):
        velocityX = -1
        velocityY = 0
    elif(e.keysym == "d" and velocityX != -1):
        velocityX = 1
        velocityY = 0

def move():
    global snek, food, snek_body, game_over, score
    if(game_over):
        return
    
    if(snek.x < 0 or snek.x >= WINDOW_WIDTH or snek.y < 0 or snek.y >= WINDOW_HEIGHT):
        game_over = True
        return
    
    for tile in snek_body:
        if(snek.x == tile.x and snek.y == tile.y):
            game_over = True
            return
    
    #collision
    if(snek.x == food.x and snek.y == food.y):
        snek_body.append(Tile(food.x, food.y))
        food.x = random.randint(0, COLS-1) * TILE_SIZE
        food.y = random.randint(0, ROWS-1) * TILE_SIZE
        score += 1
        
    #update snek body
    for i in range(len(snek_body)-1, -1, -1):
        tile = snek_body[i]
        if(i == 0):
            tile.x =  snek.x
            tile.y = snek.y
        else:
            prev_tile = snek_body[i-1]
            tile.x = prev_tile.x
            tile.y = prev_tile.y
    
    snek.x += velocityX * TILE_SIZE
    snek.y += velocityY * TILE_SIZE

def draw():
    global snek, food, snek_body, game_over, score
    move()
    
    canvas.delete("all")
    #draw food
    canvas.create_rectangle(food.x, food.y, food.x + TILE_SIZE, food.y + TILE_SIZE, fill = "red")
    
    #draw snake
    canvas.create_rectangle(snek.x, snek.y, snek.x + TILE_SIZE, snek.y + TILE_SIZE, fill = "lime green")
    
    for tile in snek_body:
        canvas.create_rectangle(tile.x, tile.y, tile.x + TILE_SIZE, tile.y + TILE_SIZE, fill = "lime green")
    
    if(game_over):
        canvas.create_text(WINDOW_WIDTH/2, WINDOW_HEIGHT/2, font = "Arial 20", text = f'WOMP WOMP LOSER!, your score lol: {score}', fill = 'white')
        canvas.create_text((WINDOW_WIDTH/2) + 30, (WINDOW_HEIGHT/2) + 30, font = "Arial 20", text = 'press spacebar loser to play again', fill = 'white')
    else:
        canvas.create_text(30, 20, font = "Arial 10", text = f'Score: {score}', fill = 'white')
    
    window.after(100, draw) #100ms = 1/10 second, 10 frames/second
    
draw()

window.bind("<KeyRelease>", change_direction)
window.mainloop()