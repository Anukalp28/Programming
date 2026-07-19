'''
# ol=['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
ol=['ono','twr','bgb','jyj','rtt','vnn','rgrs','wafaf']
# ol2=[1,2,3,4,5,6,7,8,9]
ol3=[2,8,4,6,1,5,9,7,3]
x = min(ol3)


print(ol3),print(ol)
print(min(ol3)),print(max(ol))



print('_________________________________________________________')
# print('id of old list :',id(ol))
# print('id of 2 nd old list :',id(ol2))
print('id of old list   :',id(ol3))
print('id of new list x :',id(x))
# print(id[sorted(ol3)])
'''
'''
n=['wdkak','wudhlk',[5131,65,['uteio','tii,hawdkaj','wuiarh'],654,654],'khbak']
#    0          1   2  0   1 2   0         1           2       3   4     3
print(n[2])
print(n[2][2])
print(n[2][2][1])
print(n[2][2][1][4])
'''
# lst = []
# n = int(input("enter the no of elements : "))
# print("enter the element:")
# for i in range(n):
#     ele = int(input())
#     lst.append(ele)
# print("the list is: ",lst)
# a = 'Anukalp'
# b=a[::-1]
# print(b)

# a = ['a','e','i','o','u','A','E','I','O','U',' ']
# b = 'see you soon,have a nice day'
# for i in b:
#     if i not in a:
#         b = b[:b.index(i)]+b[b.index(i)+1:]
# print(b)


#    0   1  2  3 4  5  6
# a = [10,23,44,5,65,93,78]
# larg = a[0] #10 4423  65 93 

# i = 0
# while i<len(a):  #7
#     if a[i]>larg:
#         larg=a[i]
#     i = i + 1
# print("the largest element is:")
# print(larg)

# # print(max(a))
 
a = [10,23,44,5,65,93,78]
larg = a[0] #10 4423  65 93 


for i in range(len(a)) :
 if a[i]>larg:
        larg=a[i]
    
print("the largest element is:",larg)


# print(max(a))
 