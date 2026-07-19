# #Q03----------------------------------------------

# def count_words_in_file(filename):
#         file = open(filename,"r")
#         text = file.read()
#         words = text.split()  # Split on whitespace
#         file.close()
#         return len(words)

# # Use the function
# file_name = "input.txt"
# word_count = count_words_in_file(file_name)

# print("Total number of words in",file_name,"is",word_count)
# # if word_count is not None:
# #     print(f"Total number of words in '{file_name}': {word_count}")

# #Q04----------------------------------------------

# import re 
# def extract_emails(filename):
#     file = open(filename,"r")
#     text = file.read()
#     file.close()

#     # Regular expression for matching email addresses
#     email_pattern = r'[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}'

#     # Find all email addresses
#     emails = re.findall(email_pattern, text)
#     return emails
# # Use the function
# # file_name = "emaildata.txt"
# file_name = "input.txt"
# email_list = extract_emails(file_name)

# print("Extracted email addresses:")
# for email in email_list:
#     print(email)

# #Q05----------------------------------------------

# import csv

# def calculate_average(column_index):
#     try:
#         with open("sem 1\data.csv", mode="r", newline="") as file:
#             reader = csv.reader(file)
#             header = next(reader)  # read header row
#             # print(['-'*25])
#             # print(list(reader),header)
#             # print(['-'*25])


#             total = 0
#             count = 0

#             for row in reader:
#                 # print(['-'*25])
#                 # print(row)
                
                
#                 if row[column_index] != "":
#                     try:
#                         total += float(row[column_index])
#                         count += 1
#                     except ValueError:
#                         print(f"Warning: Non-numeric data skipped: {row[column_index]}")

#             if count == 0:
#                 print("No valid numeric data found in the column.")
#             else:
#                 average = total / count
#                 print(f"Average of column '{header[column_index]}': {average}")

#     except FileNotFoundError:
#         print("Error: data.csv file not found.")
#     except IndexError:
#         print(f"Error: Column index {column_index} is out of range.")
# # Example usage:
# column_to_average = 1  # column index for 'price', starting from 0
# calculate_average(column_to_average)
# import pandas

# #Q06----------------------------------------------
# import re

# def is_valid_ipv4(ip):
#     pattern = r"^\d{1,3}\.\d{1,3}\.\d{1,3}\.\d{1,3}$"

#     # Check basic IPv4 format
#     if re.match(pattern, ip):
#         parts = ip.split(".")
#         # Check that each part is between 0 and 255
#         # print(parts)
#         for part in parts:
#             # print(part)
#             if 0 <= int(part) <= 255:
#                 pass
#             else:
#                 return False
#         return True

#         #     if 0 <= int(part) <= 255:
#         #         return True
#         # return all(0 <= int(part) <= 255 for part in parts)
#     return False
# # Test the function with some sample IP addresses
# test_ips = [
#     "192.168.1.1",
#     "10.0.0.256",
#     "255.255.255.255",
#     "172.16.0",
#     "abc.123.1.1"
# ]
# for ip in test_ips:
#     # print(f"{ip} -> {'Valid' if is_valid_ipv4(ip) else 'Invalid'}")
#     # print(ip,"->",)
#     if is_valid_ipv4(ip):
#         print(ip,"-> Valid")
#         # pass
#     else:
#         print(ip,"-> Invalid")
#         # pass


# #Q07----------------------------------------------

# import os

# source = "original_image.jpg"
# destination = "copy_image.jpg"

# try:
#     # Check if source file exists
#     if os.path.exists(source):
#         with open(source, "rb") as src_file:
#             data = src_file.read()  # Read file in binary mode
        
#         with open(destination, "wb") as dest_file:
#             dest_file.write(data)  # Write data to new file
        
#         print("Image copied successfully!")
#     else:
#         print("Error: Source image not found.")

# except Exception as e:
#     print("Error:", e)

# #Q08----------------------------------------------

# # File name
# filename = "sample.txt"

# # Words to replace
# old_word = "hello"
# new_word = "hi"

# try:
#     # Read the existing content
#     with open(filename, "r") as file:
#         content = file.read()

#     # Modify the content
#     updated_content = content.replace(old_word, new_word)

#     # Write the updated content back to file
#     with open(filename, "w") as file:
#         file.write(updated_content)

#     print("File content modified successfully!")

# except FileNotFoundError:
#     print("Error: The file does not exist.")


# #Q09----------------------------------------------
# #Q10----------------------------------------------
# # import csv

# # def calculate_average(column_index):
# #     try:
# #         with open("data.csv", mode="r", newline="") as file:
# #             reader = csv.reader(file)
# #             header = next(reader)  # read header row

# #             total = 0
# #             count = 0

# #             for row in reader:
# #                 if row[column_index] != "":
# #                     try:
# #                         total += float(row[column_index])
# #                         # count += 1
# #                     except ValueError:
# #                         print(f"Warning: Non-numeric data skipped: {row[column_index]}")

# #             if count == 0:
# #                 print("No valid numeric data found in the column.")
# #             else:
# #                 average = total / count
# #                 print(f"Average of column '{header[column_index]}': {average}")

# #     except FileNotFoundError:
# #         print("Error: data.csv file not found.")
# #     except IndexError:
# #         print(f"Error: Column index {column_index} is out of range.")
# # # Example usage:
# # column_to_average = 1  # column index for 'price', starting from 0
# # calculate_average(column_to_average)



# import csv

# def sum_column(column_index):
#     try:
#         with open("data.csv", mode="r", newline="") as file:
#             reader = csv.reader(file)
#             next(reader)  # Skip header row

#             total = 0
#             for row in reader:
#                 try:
#                     total += float(row[column_index])
#                 except ValueError:
#                     print(f"Skipping non-numeric value: {row[column_index]}")

#             print("Sum of column:", total)

#     except FileNotFoundError:
#         print("Error: data.csv file not found.")
#     except IndexError:
#         print("Error: Column index out of range.")

# # Example usage: column index 1 for second column
# column_to_sum = 1  # column index for 'price', starting from 0
# sum_column(column_to_sum)



