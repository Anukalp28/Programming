# # exp 4
# # Q1

# n = int(input("Enter number :"))

# if n <= 0 :
#     print("Enter a positive Number")
# elif n == 1:
#     print(0)
# else:
#     a,b = 0,1
#     print(a,end=" ")
#     print(b,end=" ")

#     for i in range(2,n):
#         c = a + b
#         print(c,end=" ")
#         a,b = b,c

# # Q2

# '*'
# '**'
# '***'
# '****'
# '*****'

# n = int(input("Enter number :"))

# for i in range(n):
#     for j in range(i+1):
#         print("*",end=" ")
#     print()

# # Q3

# n = int(input("Enter number :"))
# for num in range(1,n+1):
#     if num == 1:
#         print(num,end=' ')
    
#     else:
#         isprime = True
#         for i in range(2,num):
#             if num % i == 0:
#                 isprime = False
#                 break
#         if isprime:
#             print(num,end=' ')
        
# # Q4

# '1'
# '3 5'
# '7 9 11'
# '13 15 17 19'

n = int(input("Enter number :"))
c = 1
for i in range(n):
    for j in range(i+1):
        print(c,end=' ')
        c += 2
    print()

# # Q5
# '1'
# '1 1'
# '1 2 1'
# '1 3 3 1'
# '1 4 6 4 1'

# n = int(input("Enter number :"))
# for i in range(n):
#     c = 1
#     for j in range(i+1):
#         print(c,end=' ')
#         c = c * (i-j)//(j+1)
#     print()



# # exp 5
# # Q1

# str = input('Enter a string:')
# print(len(str))

# # Q2

# str = input('Enter a string:')

# rstr = str[::-1]

# if str == rstr:
#     print('string is palindrome')
# else:
#     print('string is not palindrome')

# # Q3

# str = input('Enter a string:')
# upperstr = str.upper()
# print(upperstr)

# # Q4
# str = input('Enter a string:')
# str_for_replace = input('Enter a string for replace:')
# new_sub_str = input('Enter new string:')
# new_str = str.replace(str_for_replace,new_sub_str)
# print(new_str)


# # Q5

# str = input('Enter a string:')
# chr_dict = {}
# for chr in str:
#     if chr in chr_dict:
#         chr_dict[chr] += 1
#     else:
#         chr_dict[chr] = 1
# print(chr_dict)

# # exp 6

# # Q 1
# Ist = [1, 2, 3, 4, 5]
# total = 0
# for i in Ist:
#     total += i
# print(total)

# # Q 2
# Ist = [10, 45, 23, 89, 12]
# largest = Ist[0]
# for i in Ist:
#     if i > largest:
#         largest = i
# print(largest)

# # Q 3
# Ist = [5, 2, 9, 7, 3]
# Ist.sort()
# print(Ist)

# # Q 4
# arr = [1, 1, 2, 2, 3, 4, 4]
# j = 0
# for i in range(1, len(arr)):
#     if arr[i] != arr[j]:
#         j += 1
#         arr[j] = arr[i]
# print(j + 1)

# # Q 5
# a = [1, 3, 5]
# b = [2, 4, 6]
# for i in range(len(a)):
#     if a[i] > b[0]:
#         a[i], b[0] = b[0], a[i]
#         b.sort()
# print(a + b)

# # exp 7

# # Q 1
# def fact(n):
#     if n == 0 or n == 1:
#         return 1
#     return n * fact(n - 1)

# print(fact(5))

# # Q 2
# def fib(n):
#     if n <= 1:
#         return n
#     return fib(n - 1) + fib(n - 2)

# for i in range(6):
#     print(fib(i), end=" ")

# # Q 3
# def is_prime(n):
#     if n <= 1:
#         return False
#     for i in range(2, n):
#         if n % i == 0:
#             return False
#     return True

# print(is_prime(7))

# # Q 4
# def sum_n(n):
#     if n == 0:
#         return 0
#     return n + sum_n(n - 1)

# print(sum_n(10))

# # Q 5
# def power(a, b):
#     if b == 0:
#         return 1
#     return a * power(a, b - 1)

# print(power(2, 5))

# # exp 8

# # Q 1
# f = open("sample.txt", "r")
# print(f.read())
# f.close()

# # Q 2
# f = open("data.csv", "r")
# for line in f:
#     print(line)
# f.close()

# # Q 3
# text = input("Enter text: ")
# f = open("input.txt", "w")
# f.write(text)
# f.close()

# # Q 4
# f1 = open("source.txt", "r")
# f2 = open("destination.txt", "w")
# f2.write(f1.read())
# f1.close()
# f2.close()

# # Q 5
# word = "python"
# f = open("sample.txt", "r")
# text = f.read()
# f.close()
# print(text.lower().count(word))

# # exp 9

# # Q 1
# try:
#     n = int(input("Enter number: "))
#     print(n)
# except ValueError:
#     print("Invalid integer")

# # Q 2
# try:
#     a = int(input("Enter first number: "))
#     b = int(input("Enter second number: "))
#     print("Result:", a / b)
# except ZeroDivisionError:
#     print("Cannot divide by zero")

# # Q 3
# try:
#     f = open("abc.txt", "r")
#     print(f.read())
# except FileNotFoundError:
#     print("File not found")

# # Q 4
# while True:
#     try:
#         n = int(input("Enter integer: "))
#         break
#     except ValueError:
#         print("Try again")

# # Q 5
# class MyError(Exception):
#     pass

# try:
#     age = int(input("Enter your age: "))
#     if age < 18:
#         raise MyError("Not eligible")
#     print("Eligible")
# except MyError as e:
#     print(e)

# # exp 10

# # Q 1
# class Rectangle:
#     def __init__(self, l, b):
#         self.l = l
#         self.b = b
#     def area(self):
#         return self.l * self.b
#     def perimeter(self):
#         return 2 * (self.l + self.b)

# r = Rectangle(4, 5)
# print("Area of rectangle:", r.area())
# print("Perimeter of rectangle:", r.perimeter())

# # Q 2
# class BankAccount:
#     def __init__(self, balance):
#         self.balance = balance
#     def deposit(self, amount):
#         self.balance += amount
#         print("Amount deposited:", amount)
#     def withdraw(self, amount):
#         self.balance -= amount
#         print("Amount withdrawn:", amount)
#     def display_balance(self):
#         print("Current Balance:", self.balance)

# acc = BankAccount(1000)
# acc.display_balance()
# acc.deposit(500)
# acc.withdraw(200)
# acc.display_balance()

# # Q 3
# class Student:
#     def __init__(self, name, age):
#         self.name = name
#         self.age = age
#     def display(self):
#         print("Student Name:", self.name)
#         print("Student Age:", self.age)

# s = Student("Sagar", 22)
# s.display()

# # Q 4
# class Shape:
#     def display(self):
#         print("This is a shape")

# class Square(Shape):
#     def show(self):
#         print("This is a square")

# sq = Square()
# sq.display()
# sq.show()

# # Q 5
# class Car:
#     def __init__(self):
#         self.__speed = 0
#     def set_speed(self, speed):
#         self.__speed = speed
#         print("Speed set to:", speed)
#     def get_speed(self):
#         print("Current speed:", self.__speed)

# c = Car()
# c.set_speed(80)
# c.get_speed()

# import selenium as se
# from selenium import webdriver
# from selenium.webdriver.common.by import By
# from selenium.webdriver.common.keys import Keys
# import time

# web = webdriver.Chrome()
# web.get("https://www.instagram.com/reels")
# print(web.title)
# print(web)

# time.sleep(5)

# per = input('Ready Y/N :')
# if per.upper() == 'Y':
#     while True: 
#         real_view = web.find_element(By.TAG_NAME,'body')
#         real_view.send_keys(Keys.ARROW_DOWN)
#         print('scrolling',real_view)
#         time.sleep(30)

# else:
#     web.close()



# str = input('Enter a string:')

# rev_str = str[::-1]

# if str == rev_str:
#     print('string is palindrome')
# else:
#     print('string is not palindrome')