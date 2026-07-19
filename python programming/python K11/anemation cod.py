import numpy as np
import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation

# Set up the figure and axes
fig, ax = plt.subplots()
ax.set_xlim(0, 2*np.pi)
ax.set_ylim(-1.2, 1.2)

# Create the x-values for the functions
x_vals = np.linspace(0, 2*np.pi, 200)

# Define the sine and cosine functions
sine_func = lambda x: np.sin(x)
cosine_func = lambda x: np.cos(x)

# Create the lines for the sine and cosine functions
sine_line, = ax.plot([], [], color='blue')
cosine_line, = ax.plot([], [], color='red')

# Define the update function for the animation
def update(frame):
    # Calculate the y-values for the sine and cosine functions
    sine_vals = sine_func(x_vals + frame)
    cosine_vals = cosine_func(x_vals + frame)
    
    # Set the y-values for the lines
    sine_line.set_data(x_vals, sine_vals)
    cosine_line.set_data(x_vals, cosine_vals)
    
    # Return the lines
    return sine_line, cosine_line

# Create the animation
animation = FuncAnimation(fig, update, frames=200, interval=20)

# Display the animation
plt.show()



