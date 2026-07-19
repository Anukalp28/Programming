# string = input("Enter a string :")
# sum = 0
# for i in string:
#     sum += 1
# d = {}
# d[string] = sum

# while True:
#     print("ok")
#     ask = input("do you want to add more string ? y/n")
#     if ask == "n":
#         break

# print(d)

#Q3----------------------------------------------
# string = "hallo world"
# chr_dict = {}
# for chr in string:
#     if chr in chr_dict:
#         chr_dict[chr] += 1
#     else:
#         chr_dict[chr] = 1
# print(chr_dict)

#Q4----------------------------------------------
# x = 12345
# sum = 0
# while x != 0:
#     # sum = sum + (x % 10)
#     sum += x % 10

#     x = x//10
# print("sum of digits of a number is :",sum)

#Q5----------------------------------------------

# for num in range(2,100+1):
#     isprime = True

#     for  i in range(2,num):
#         if num % i == 0:
#             # print("not a prime")
#             isprime = False
#             break
#     if isprime :
#         print(num ,end=',')

#Q6----------------------------------------------

# string = "asdkdsa"

# string = input("Enter string :")
# flag = True
# for i in range(len(string)):
#     # print(string[i],string[len(string)-(1+i)])
#     if string[i] != string[len(string)-(1+i)]:
        
#         flag = False
#         break
# if flag:
#     print("string is palindrome")
# else:
#     print("string is not palindrome")

#Q7----------------------------------------------
'''
1
12
123
1234
12345
'''
# n = 5 

# for i in range(n):
#     ch = 1
#     for j in range(i+1):
#         print(ch,end="")

#         ch += 1
    
#     # for j in range(n-i):
#     #     print("$",end=" ")
    
#     print()

'''
12345
1234
123
12
1
'''
# n = 5
# for i in range(n):
#     ch = 1
#     for j in range(n-i):
#         print(ch,end="")
        
#         ch += 1
    
#     print()

#Q8----------------------------------------------

# if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
#     print("leeeeppppp")
# else:
#     print("noooo")

# year = int(input("Enter year :"))

# if (year % 400 == 0) and (year % 100 == 0):
#     print(year,"is a leap year")

# elif (year % 4 == 0) and(year % 100 != 0):
#     print(year,"is a leap year")

# else:
#     print(year,"is not a leap year")

#Q9----------------------------------------------

# num = 123321
# temp = num
# len = 0
# while temp != 0:
#     len = len + 1
#     # print(len)
#     temp //= 10

# flag = True
# for i in range(len):
    
#     print(num // (10**(len-(i+1))),num % 10**(i+1))
    
# num = input("Enter number :")
# flag = True
# for i in range(len(num)):
#     # print(string[i],string[len(string)-(1+i)])
#     if num[i] != num[len(num)-(1+i)]:
        
#         flag = False
#         break
# if flag:
#     print("number is palindrome")
# else:
#     print("number is not palindrome")

#Q10----------------------------------------------

# '''
# addition 1
# substraction 2
# multipcation 3
# diivsion 4
# exponants of no 5
# '''



# n1 = int(input("Enter 1st number :"))
# n2 = int(input("Enter 2nd number :"))
# print(
# '''
# a. addition of two numbers       1
# b. subtraction of two numbers    2
# c. multiplication of two numbers 3
# d. division of two numbers       4
# e. exponent of two numbers       5
# '''
# )

# ch = input("Chose operation a/b/c/d/e :")

# if ch == "a":
#     print(n1,"+",n2,"=",n1 +n2)
# elif ch == "b":
#     print(n1,"-",n2,"=",n1 -n2)
# elif ch == "c":
#     print(n1,"X",n2,"=",n1 *n2)
# elif ch == "d":
#     print(n1,"/",n2,"=",n1 /n2)
# elif ch == "e":
#     print(n1,"^",n2,"=",n1 **n2)
# else:
#     print("invalid choice ")