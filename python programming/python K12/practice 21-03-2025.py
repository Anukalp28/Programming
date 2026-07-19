# functions 

# def test(a,b,c):
#     add = a+b+c
#     sub = -a-b-c
#     pow = a**b*c
#     sqrt = ((a+b+c)**(1/2))
    
#     print (add,sub,pow,sqrt)
#     return add,sub,pow,sqrt

# print(test(3,2,5))

# a,b,c,d = test(5,6,7)
# print(a)
# print(b)
# print(c)
# print(d)

# def vol(l,b=10,h=3.14):
#     vol = l*b*h
#     return vol

# print(vol(2))

# print(vol(2,2))

# print(vol(2,2,2))

# print(vol(1,h=7,b=8))

# b = 20
# x=2
# y=5
# def val(x,y):
#     global b
#     b = 55
#     x=5
#     x = x+1
#     print(x)
#     print(y*2)

# b = "wdawd"

# val(x,y)

# b ="79798"

# print(x)
# print(y)
# print(b)
# print(int(b)+100)

# def f1():
#     x = 100
#     def f2():
#         global x 
#         x = 200

#         def f3():
#             k = "amdpamwpkd"
#             print(k)
#         print("calling f3")
#         f3()
    
#     print("befor f2 call",x)
#     print("calling f2")
#     f2()
#     print("after f2 call",x)

#     print("calling f3")

# f1()
# print(x)

# def f1():
#     print('just 1 inside f1',1)
#     global a
#     a = 20
#     print('a inside f1',a)

#     def f2():
#         b = 30
#         global x
#         x=200
#         print(b)
#         def f3():
#             # print('x inside f3',x) #error

#             def f4():
#                 global x
#                 x = 100
#                 print('x inside f4',x)
#             f4()
#             print('x inside f3',x)
#         print('x befor calilng f3',x)
#         f3()
#         print('x inside f2',x)
#     print("calling f2")
#     f2()



# print("calling f1")    
# f1()
# print('a out of all fun',a)
# print('x out of all',x)
# x = 20
# print('x out of all',x)

# try:
#     a = 1
#     y = 1/a
# except ZeroDivisionError:
#     print()
# except:
#     print("dwwadaw")
# else:
#     print()
# finally:
#     print()

# try:
#     n1 = int(input("enter the first no :"))
#     n2 = int(input("enter the second no :"))
#     result = n1/n2
# except ZeroDivisionError :
#     print('Error : cannot divide by zero or invade input')
#     print('Error code : 100')
# except ValueError :
#     print('Error invade input')
#     print('Error code : 200')
# # except :
# #     print('idk error')
# else:
#     print(result)
# finally:
#     print('it will always run ')

# try:
#     n1 = int(input('enter first no :'))
#     n2 = int(input('enter second no :'))
#     div = n1/n2
# except ValueError :
#     print('Error invade input')
#     print('Error code : 200')
# except ZeroDivisionError :
#     print('Error : cannot divide by zero')
#     print('Error code : 100')
# except:
#     print('unexpected Error')
#     print('Error code : 999')
# else:
#     print(div)
# finally :
#     print('success')



