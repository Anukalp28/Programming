# print("Hello, World!")

# num1 = int(input("Enter first number: "))
# num2 = int(input("Enter second number: "))
# sum = num1 + num2
# print("The sum is: ", sum)

# import math
# radius = float(input("Enter the radius of the circle: "))
# area = math.pi * (radius*radius)
# print("The area of a circle with radius",radius, "is:",area)

# var1 = input("Enter the first variable: ")
# var2 = input("Enter the second variable: ")
# print("Before swapping - var1:",var1,"var2:",var2)
# var1, var2 = var2, var1
# print("After swapping - var1:",var1,"var2:",var2)

# name = input("What is your name? ")
# age = input("What is your age? ")
# print("Hello",name,"! You are",age,"years old.")

#exp 2 -----------------------------------------------------

# number = int(input("Enter a number: "))
# if number % 2 == 0:
#  print("The number",number,"is even.")
# else:
#  print("The number",number,"is odd.")

# number = float(input("Enter a number: "))
# if number > 0:
#  print("The number entered is positive.")
# elif number < 0:
#  print("The number entered is negative.")
# else:
#  print("The number entered is zero.")

# num1 = float(input("Enter the first number: "))
# num2 = float(input("Enter the second number: "))
# num3 = float(input("Enter the third number: "))
# largest = num1
# if num2 > largest:
#  largest = num2
# if num3 > largest:
#  largest = num3
# print("The largest number entered is:",largest)

# year = int(input("Enter a year: "))
# if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
#  print(year,"is a leap year.")
# else:
#  print(year,"is not a leap year.")

# score = float(input("Enter your exam score (0-100): "))
# if 0 <= score <= 100:
#     if score >= 50:
#         print("Congratulations! You passed.")
#     else:
#         print("Sorry, you failed.")
# else:
#  print("Please enter a valid score between 0 and 100.")

#exp 3 ----------------------------------------

# num = int(input("Enter a number: "))
# print("Multiplication Table for",num,":")
# for i in range(1, 11):
#  print(num,"x",i,"=",num * i)

# n = int (input ("Enter a number: "))
# factorial = 1
# if n >= 1:
#     for i in range (1, n+1):
#         factorial=factorial *i
# print("Factorial of the given number is: ", factorial)

# sum=0
# num=int(input("Enter a number:"))
# temp=num
# while(num):
#     i=1
#     fact=1
#     rem=num%10
#     while(i<=rem):
#         fact=fact*i
#         i=i+1
#     sum=sum+fact
#     num=num//10
# if(sum==temp):
#     print("Given number is a strong number")
# else:
#     print("Given number is not a strong number")

nterms = int(input("How many terms? "))
n1, n2 = 0, 1
count = 0
if nterms <= 0:
    print("Please enter a positive integer")
elif nterms == 1:
    print("Fibonacci sequence upto",nterms,":")
    print(n1)
else:
    print("Fibonacci sequence:")
    while count < nterms:
    for _ in range(nterms):
        print(n1)
        nth = n1 + n2
        n1 = n2
        n2 = nth
        count += 1
        n1, n2 = n2, n1 + n2


num = int(input("Enter 3-digit number : "))
digit_sum = 0
temp = num
while temp > 0:
    digit = temp % 10
    digit_sum += digit ** 3
    temp = temp // 10
if digit_sum == num:
    print('It is an Armstrong number')
else:
    print('It is not an Armstrong number')