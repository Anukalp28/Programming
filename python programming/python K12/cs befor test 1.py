# program 1.4
# n = 5
# p=5
# for i in range(n):
#     for j in range(i,n):
#         print(p,end=' ')
#     p = p - 1
#     print()

# program 1.5

# n = 5
# for i in range(n):
#     for j in range(i+1,0,-1):
#         print(j,end=' ')

#     print()

# program 1.6

# n = 5 
# for i in range(n):
#     for j in range(i+1):
#         print(' ',end=' ')

#     for j in range(i,n):
#         print('*',end=' ')

#     for j in range(i,n-1):
#         print('*',end=' ')

#     print()

# program 1.7
# n = 5

# for i in range(n):
#     for j in range(i,n):
#         print(' ',end=' ')
#     for j in range(i+1):
#         print('*',end=' ')

#     for j in range(i):
#         print('*',end=' ')
#     print()

# program 1.8

# n = 5
# for i in range(n-1):
#     for j in range(i,n):
#         print(' ',end=' ')
    
#     for j in range(i+1):
#         print('B',end=' ')
    
#     for j in range(i):
#         print('C',end=' ')

#     print()

# for i in range(n):
#     for j in range(i+1):
#         print(' ',end=' ')
    
#     for j in range(i,n):
#         print('B',end=' ')
    
#     for j in range(i,n-1):
#         print('C',end=' ')

#     print()

# program 8 
# w = 'python'
# n = 6
# for i in range(n):
#     for j in range(i+1):
#         print('A',end=' ')

#     print()
# x = ' '
# for i in w:
#     x+= i
#     print(x)

# 5
# n = 145
# tmp = n
# s = 0
# while(tmp > 0):

#     r = tmp % 10
#     i = 1
#     f = 1
#     while(i <= r):
#         f = f * i
#         i = i + 1

#     print('factorial of ',r,'=',f)
#     s = s +f
#     tmp = tmp // 10
# print(s)

# x=2
# y=5
# def val(x,y):
#     x=5
#     x=x+1
#     print(x)
#     print(y*2)
# val(x,y)
# print(x)
# print
result = ('Anukalp','12345','2006-04-28','10000','82103683','100000.00')

print('Name :',result[0],'\n',
      'account_No :',result[1],'\n',
      'date_of_birth :',result[2],'\n',
      'address :',result[3],'\n',
      'phone_no :',result[4],'\n',
      'opening_balance :',result[5]),
