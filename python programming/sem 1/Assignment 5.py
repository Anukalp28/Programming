# q1

# import numpy as np

# # 1. Create a NumPy array with values from 1 to 10
# # np.arange creates a range of values; the second argument is exclusive.
# # So arange(1, 11) creates values 1, 2, ..., 10.
# my_array = np.arange(1, 11)

# # print(f"The created array is: {my_array}")
# print('The created array is:',my_array)

# # 2. Find the sum of the elements
# array_sum = np.sum(my_array)

# # print(f"The sum of the array elements is: {array_sum}")
# print('The sum of the array elements is:',array_sum)

# # 3. Find the average (mean) of the elements
# array_average = np.mean(my_array)

# # print(f"The average (mean) of the array elements is: {array_average}")
# print('The average of the array elements is:',array_average)

# #q2


# import pandas as pd
# # import matplotlib.pyplot as plt
# # import seaborn as sns

# # Create the data
# data = {
#     'Name': ['Alice', 'Bob', 'Charlie', 'David'],
#     'Age': [23, 25, 30, 22],
#     'City': ['New York', 'Los Angeles', 'Chicago', 'Houston']
# }

# # Load the data into a Pandas DataFrame
# df = pd.DataFrame(data)

# print("Original DataFrame:")
# print(df)
# print("-" * 30)

# # a) Display the first two rows of the DataFrame
# print("First two rows of the DataFrame:")
# print(df.head(2))
# print("-" * 30)

# # b) Add a new column "Score" with values [85, 90, 78, 92]
# df['Score'] = [85, 90, 78, 92]

# print("DataFrame after adding 'Score' column:")
# print(df)
# print("-" * 30)

# # q3

# import matplotlib.pyplot as plt

# # Data provided by the user
# days = [1, 2, 3, 4, 5]
# temperature_celsius = [22, 24, 20, 23, 25]

# # Create the plot
# plt.figure(figsize=(8, 5)) # Optional: Adjusts the size of the figure
# plt.plot(days, temperature_celsius, marker='o', linestyle='-', color='b')

# # Add titles and labels
# plt.title('Temperature Over Five Days')
# plt.xlabel('Day')
# # plt.ylabel('Temperature ($\mathbf{^\circ C}$)') # Using LaTeX for the degree symbol
# plt.ylabel('Temperature ° C')
# # Add grid
# plt.grid(True)

# # Display the plot
# plt.show()


# q10

# import matplotlib.pyplot as plt

# # Data
# labels = ['Coffee', 'Tea', 'Juice', 'Water']
# sizes = [45, 30, 15, 10]
# colors: list[str] = ["#ff0000","#0080ff","#00ff00","#ff8000"]
# explode = (0.05, 0, 0, 0)  # explode 1st slice
# explode = (0, 0, 0, 0)

# Plot configuration
# plt.figure(figsize=(8, 6))
# plt.pie(sizes, explode=explode, labels=labels, colors=colors,
# autopct='%1.1f%%', shadow=True, startangle=140)

# plt.pie(
#     sizes,
#     labels=labels,
#     colors=[
#         "#ff0000",
#         "#0080ff",
#         "#00ff00",
#         "#ff8000"
#     ],
#     # explode=explode,
#     autopct='%1.1f%%',
#     startangle=140

# )


# plt.axis('equal')  # Equal aspect ratio ensures that pie is drawn as a circle.
# plt.title('Beverage Preference Survey Results')

# # To display the chart when the script is run:
# plt.show()

