# # # import random

# # # def guessing_game():
# # #     print("Welcome to the Guessing Game!")
# # #     secret_number = random.randint(1, 100)
# # #     attempts = 0

# # #     while True:
# # #         try:
# # #             guess = int(input("Guess a number between 1 and 100: "))
# # #         except ValueError:
# # #             print("Please enter a valid number.")
# # #             continue

# # #         attempts += 1

# # #         if guess == secret_number:
# # #             print(f"Congratulations! You guessed the secret number {secret_number} in {attempts} attempts.")
# # #             break
# # #         elif guess < secret_number:
# # #             print("Too low! Try again.")
# # #         else:
# # #             print("Too high! Try again.")

# # # if __name__ == "__main__":
# # #     guessing_game()
# # import turtle

# # # Set up the screen
# # screen = turtle.Screen()
# # screen.bgcolor("black")

# # # Create a turtle
# # anim_turtle = turtle.Turtle()
# # anim_turtle.shape("turtle")
# # anim_turtle.color("red")
# # anim_turtle.speed(0)

# # # Animation loop
# # for _ in range(306):
# #     anim_turtle.circle(100)
# #     anim_turtle.right(10)

# # # Hide the turtle
# # anim_turtle.hideturtle()

# # # Keep the window open until closed by the user
# # turtle.done()

# import turtle
# import random

# # Set up the screen
# screen = turtle.Screen()
# screen.title("Catch the Ball")
# screen.bgcolor("black")
# screen.setup(width=800, height=600)

# # Player turtle
# player_turtle = turtle.Turtle()
# player_turtle.shape("turtle")
# player_turtle.color("white")
# player_turtle.penup()
# player_turtle.goto(0, -250)

# # Balls list
# balls = []

# # Function to create a ball
# def create_ball():
#     ball = turtle.Turtle()
#     ball.shape("circle")
#     ball.color("blue")
#     ball.penup()
#     ball.goto(random.randint(-390, 390), 290)
#     balls.append(ball)

# # Function to move the player
# def move_left():
#     x = player_turtle.xcor()
#     x -= 20
#     if x < -390:
#         x = -390
#     player_turtle.setx(x)

# def move_right():
#     x = player_turtle.xcor()
#     x += 20
#     if x > 390:
#         x = 390
#     player_turtle.setx(x)

# # Keyboard bindings
# screen.listen()
# screen.onkeypress(move_left, "Left")
# screen.onkeypress(move_right, "Right")

# # Main game loop
# while True:
#     create_ball()

#     for ball in balls:
#         y = ball.ycor()
#         y -= 20
#         ball.sety(y)

#         if y < -290:
#             ball.clear()
#             ball.hideturtle()
#             balls.remove(ball)

#         # Check for collision
#         if (player_turtle.distance(ball) < 20):
#             ball.clear()
#             ball.hideturtle()
#             balls.remove(ball)

#     screen.update()
import pygame
from pygame.locals import *

# Initialize pygame
pygame.init()

# Set up the screen
width, height = 800, 600
screen = pygame.display.set_mode((width, height))
pygame.display.set_caption("Simple 3D Game")

# Define colors
WHITE = (255, 255, 255)

# Main game loop
running = True
while running:
    for event in pygame.event.get():
        if event.type == QUIT:
            running = False

    # Clear the screen
    screen.fill(WHITE)

    # Draw 3D-like objects
    # Example: Rectangles to simulate 3D cubes
    pygame.draw.rect(screen, (0, 255, 0), (200, 200, 50, 50))
    pygame.draw.rect(screen, (0, 0, 255), (300, 250, 50, 50))
    pygame.draw.rect(screen, (255, 0, 0), (400, 300, 50, 50))

    # Update the screen
    pygame.display.flip()

# Quit the game
pygame.quit()
