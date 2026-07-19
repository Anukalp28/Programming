#-----------leap year problem ---------
# year = int(input("Enter year :"))

# if (year % 400 == 0) or (year % 4 ==0 and year % 100 !=0):
#     print(year,"is a leap year")
# else:
#     print(year,"is not a leap year")

# -------factorial using for loop --------

# n = int(input("Enter number :"))
# fac = 1
# for i in range(1,n+1):
#     fac *= i
# print(fac)

# num = int(input("Enter number :"))

# -------strong number----------

# num = 145
# temp = num
# sum = 0

# while temp > 0 :

#     ream = temp % 10
#     fac = 1
#     for  i in range(1,1+ream):
#         fac = fac * i
#     sum += fac

#     temp //= 10

# if sum == num:
#     print(num,"is a strong number")
# else:
#     print(num,"is not a strong number")

#-------armstrong no -------------
# num = 153
# temp = num
# sum = 0

# while temp > 0 :

#     ream = temp % 10
#     sum += ream ** 3

#     temp //=10

# if sum == num:
#     print(num,"is a armstrong number") 
# else:
#     print(num,"is not a armstrong number")

#---------fibonachi--------------

# n = int(input("Enter number :"))
# if n <= 0 :
#     print("Enter a positive Number")
# elif n == 1:
#     print(0)
# else:
#     a,b = 0,1
#     print(a,end=" ")
#     print(b,end=" ")
# for i in range(2,n):
#     c = a + b
#     print(c,end=" ")
#     a,b = b,c

#-------neth prime no -------
# n = 10

# for num in range (1,11):
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
#----------------pat------------------
# '''
# 1
# 11
# 121
# 1331
# 14641
# '''

# n=5
# for i in range(n):
#     c = 1
#     for j in range(i+1):
#         print(c,end=" ")
#         c = c*(i-j)//(j+1)
    
#     print()

#---count accurrence of each chr in str----

str = 'jdshfkjhsdskdjf'
chr_dict ={}
for chr in str:
    if chr in chr_dict:
        chr_dict[chr] += 1
    else:
        chr_dict[chr] = 1
print(chr_dict)

# -----remove duplicates-----------
# lst = [1,1,2,2,2,3,4,5,6]

# templst =[]

# for i in lst:
#     if i not in templst:
#         templst.append(i)
# print(templst)

#---------two list shorting wethout extra space

# a =[1,3,5]
# b=[2,4,6,7,8]

# for i in range(len(a)):
#     if a[i]>b[0]:
#         a[i],b[0] = b[0],a[i]
#         b.sort()
# print(a+b)

#-----fac with recursion

# def fac(n):
#     if n == 0:
#         return 1
#     else:
#         return n * fac(n-1)
    
# print(fac(5))


#--------fibonacci number

# def fib(n):
#     if n<=1:
#         return n
#     else:
#         return fib(n-1) + fib(n-2)
    
# for i in range(6):
#     print(fib(i),end=" ")

# is prime function

#---------------natural sum

# def natsum(n):
#     if n == 0:
#         return 0
#     else:
#         return n + natsum(n-1)
    
# print(natsum(5))


#---calculat pow using recursion

# def pow(a,b):
#     if b == 0:
#         return 1
#     else:
#         return a * pow(a,b-1)
    
# print(pow(2,5))
