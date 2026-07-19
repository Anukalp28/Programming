# 37. Design and implement a menu-driven calculator program in Python that
#  performs arithmetic operations $(+,-,X,\,%)$.

# def add(a,b):
#     return a+b 
# def subtract(a,b):
#     return a-b
# def multiply(a,b):
#     return a*b
# def divide(a,b):
#     if b==0 :
#         print("Error : divide by zero")
#     else:
#         return a/b
# def modulus(a,b):
#     if b==0 :
#         print("Error : divide by zero")
#     else:
#         return a%b
    
# a = int(input("Enter first no.:"))
# b = int(input("Enter seconde no.:"))
# op = int(input("select operation(+,-,*,/,%)(1,2,3,4,5):"))

# if op == 1:
#     print(add(a,b))
# elif op == 2:
#     print(subtract(a,b))
# elif op == 3:
#     print(multiply(a,b))
# elif op == 4:
#     print(divide(a,b))  
# elif op == 5:
#     print(modulus(a,b))
# else:
#     print("wrong operation selected")

# 39. Write a Python program to implement a Stack using Lists and demonstrate Push and Pop operations

# stack = []

# def push(x):
#     return stack.append(x)
# def pop():
#     return stack.pop()
# def display():
#     return print("stack:",stack)
# def is_empty():
#     if len(stack) == 0:
#         print("empty")
#     else:
#         print("not empty len of stack:",len(stack))



# display()
# is_empty()
# for i in range(10,110,10):
#     push(i)
# display()
# is_empty()
# pop()
# display()
# pop()
# pop()
# display()

# # 41. Write a Python script to perform an SQL Inner Join operation on two datasets stored as lists of dictionaries
# # Dataset 1: Student Demographics
# students = [
#     {"student_id": 101, "name": "Anukalp", "course": "AIML"},
#     {"student_id": 102, "name": "Rahul", "course": "CSE"},
#     {"student_id": 103, "name": "Sneha", "course": "AIDS"}
# ]

# # Dataset 2: Academic Performance Marks
# grades = [
#     {"student_id": 101, "SGPA": 8.86, "grade": "A+"},
#     {"student_id": 102, "SGPA": 7.50, "grade": "B"},
#     {"student_id": 104, "SGPA": 9.20, "grade": "O"}  # ID 104 matches no student record
# ]

# def inner_join(table1, table2, join_key):
#     joined_result = []
    
#     # Nested loops to match keys manually across memory records
#     for row1 in table1:
#         for row2 in table2:
#             if row1[join_key] == row2[join_key]:
#                 # Merge dictionaries using dictionary unpacking copy syntax
#                 # The ** operator unpacks the key-value pairs from each dictionary.
#                 # This line creates a new dictionary by combining the contents of row1 and row2.
#                 merged_row = {**row1, **row2} 
#                 joined_result.append(merged_row)
                
#     return joined_result

# # Execute operations
# joined_dataset = inner_join(students, grades, "student_id")

# print("--- SQL INNER JOIN RESULT ---")
# for record in joined_dataset:
#     print(record)

# import threading
# import time

# def print_numbers():
#     for i in range(5):
#         time.sleep(1)
#         print(f"Thread running: {i}")

# # Create a thread pointing to a target function
# my_thread = threading.Thread(target=print_numbers)
# my_thread.start()  # Initiates execution
# my_thread.join()   # Waits for the thread to complete before proceeding
# print("Thread finished!")


# Write a Python program to implement Sequential Search and analyse its working
# def search(arr,target):
#     for i in range(len(arr)):
#         if arr[i] == target:
#             return i
#     return

# data = [4, 2, 9, 7, 5, 1]
# print(search(data,3))



# def sequential_search(arr, target):
#     # Traverse through the index of the list
#     for i in range(len(arr)):
#         if arr[i] == target:
#             return i  # Return index position if match is found
#     return -1  # Return -1 if target element does not exist

# # Execution test
# target_val = 7
# result = sequential_search(data, target_val)

# if result != -1:
#     print(f"Element found at index: {result}")
# else:
#     print("Element not found in the list.")


# # 31. Write a Python program to implement Selection Sort.
# def selection_sort(arr):
#     n = len(arr)
#     # Traverse through all array elements
#     for i in range(n):
#         # Find the minimum element in remaining unsorted array
#         min_idx = i
#         for j in range(i + 1, n):
#             if arr[j] < arr[min_idx]:
#                 min_idx = j
                
#         # Swap the found minimum element with the first element
#         arr[i], arr[min_idx] = arr[min_idx], arr[i]

# # Execution Test
# # data = [64, 25, 12, 22, 11]
# data = [7,2,5,6,4,8,1,9]
# selection_sort(data)
# print("Sorted array:", data)

# def calculate_age(year):
#     assert year > 0, "Year must be positive!"
#     return 2026 - year

# print(calculate_age(-2006))

# # Define the filename
# filename = "sample_test.txt"

# # 1. Writing data into a text file
# with open(filename, "w") as file:  # 'w' mode opens for writing
#     file.write("Hello! This is line one inside the file.\n")
#     file.write("Python handles file handling very efficiently.\n")
#     file.write("End of the sample data text document.")
# print(f"--- Data successfully written to '{filename}' ---\n")

# # 2. Reading data from the text file
# print("--- Reading content from the file: ---")
# try:
#     with open(filename, "r") as file:  # 'r' mode opens for reading
#         # Read the entire file content at once
#         file_content = file.read()
#         print(file_content)
# except FileNotFoundError:
#     print(f"Error: The file '{filename}' was not found.")


# 44. Write a Python program to create and read CSV files and perform SQL-like SELECT operations on the data. [cite: 55]
import csv

filename = "student_records.csv"

# 1. Create and Write to a CSV File
headers = ["StudentID", "Name", "Major", "SGPA", "Grade"]
data = [
    [101, "Alice Smith", "Computer Science", 8.85, 'A'],
    [102, "Bob Jones", "Mathematics", 8.42, 'A'],
    [103, "Charlie Brown", "Computer Science", 6.90, 'C'],
    [104, "Daisy Miller", "Data Science", 7.91, 'B'],
    [105, "Ethan Hunt", "Mathematics", 9.15, 'A+'],
]

with open(filename, "w", newline="") as file:
    writer = csv.writer(file)
    writer.writerow(headers)     # Write the header row
    writer.writerows(data)       # Write the structural records row data block

print(f"CSV file '{filename}' successfully generated.\n")

# 2. Read and Perform SQL-like SELECT Operation
print("--- Performing SELECT Name ---")

try:
    with open(filename, "r") as file:
        reader = csv.reader(file)  # Reads each row as a dictionary mapped to headers
        for row in reader:
            for c in row:
                print(c,end="\t")
            print()


            # if row[3]=="SGPA":
            #     for c in row:
            #         print(c,end="\t")
            #     print()
            # elif float(row[3])>7 :
            #     for c in row:
            #         print(c,end="\t")
            #     print()

except FileNotFoundError:
    print("Error: Targeted CSV dataset document file is missing.")