import matplotlib.pyplot as plt
import numpy as np

# Define the coffee bean temperature data
bean_temp = np.array([180, 190, 200, 210, 220, 230, 240, 250, 255, 260, 265, 
                    270, 275, 280, 285, 290, 295, 300, 305, 310, 320])

# Define the time data in seconds
time = np.linspace(0, 600, len(bean_temp))  # 600 seconds = 10 minutes

# Plot the bean temperature curve
plt.plot(time, bean_temp, label='Bean Temp')

# Add labels and title
plt.xlabel('Time (seconds)')
plt.ylabel('Temperature (°C)')
plt.title('Coffee Roasting Curve')

# Add grid and legend
plt.grid(True)
plt.legend()

# Show the plot
plt.show()
