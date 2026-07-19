# program to print grades

# en = int(input('Enter english marks:'))
# cs = int(input('Enter computer science marks:'))
# ph = int(input('Enter physics marks:'))
# ch = int(input('Enter chemistry marks:'))
# ma = int(input('Enter maths marks:'))

# Total = en + cs + ph + ch + ma
# percentage = (Total/500)*100

# if  (percentage >= 90) :
#     print('A grade')
# elif (percentage >= 80) :
#     print('B grade')
# elif (percentage >= 70) :
#     print('C grade')
# elif (percentage >= 60) :
#     print('D grade')
# elif (percentage >= 50) :
#     print('E grade')

# to find strong 
# no


# def factorial(a):
#      temp = 1
#      for i in range (1,a+1):
#           temp = temp*i
#         #   print(temp)
#      return temp

# no = input('enter a no :')
# # no = '145'

# sum = 0
# for i in no:
#      sum = sum + factorial(int(i))
#     #  print(sum)
# if sum == no :
#      print('no is a strong no')
# elif sum != no :
#      print('no is not a strong no')

# to pint parandrom of no 
# max = int(input('enter the max value :'))
# print('parandrom no b/w 1 and',max,'are :')

# for num in range(1,max+1):
#     temp = num
#     reverse = 0
#     while (temp > 0):
#         reminder = temp % 10
#         reverse = (reverse*10) +reminder
#         temp = temp // 10
#     if num == reverse :
#         print(num)

# partane\
# n = 10
# for i in range (n):
#     for j in range(i,n):
#         print(' ',end=' ')

#     for j in range(i):
#         print('*',end=' ')

#     for j in range(i-1):
#         print('*',end=' ')

#     for j in range (i-1,n):
#         print(' ',end=' ')

#     print()

# for i in range (n):
#     for j in range(i):
#         print(' ',end=' ')

#     for j in range(i,n-1):
#         print('*',end=' ')

#     for j in range(i-1,n-1):
#         print('*',end=' ')

#     for j in range (i):
#         print(' ',end=' ')

#     print()
# hcf/gcd
def hcf(x,y):
    if x>y:
        smaller = y
    else:
        smaller = x
    for i in range(1,smaller+1):
        if (x % i ==0 )and(y % i ==0 ):
            hcf = i
            print(i)
    return hcf


def lcm(x,y):
    if x<y:
        grater = y
    else:
        grater = x
    for i in range(grater,x*y+1):
        if (i % x == 0 )and(i % y == 0):
            lcm = i
            print(i)
            break
    return lcm


lcm(4,16)
