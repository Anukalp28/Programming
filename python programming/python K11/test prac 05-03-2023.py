# string = "He's a chip off the old block"
# print(string[0:7])
# print(string[5:27])
# print(string[9:21])
# print(string[23:29])


# str ="Qwerty"
# print(str[:3])

# print("my"*3+"book"+'7')

# str = 'save Earth'
# a=' '
# for i in range(len(str)):
#     a=a+str[i]
#     print(a)

# s='Happy'
# s1='Day'
# s2=s[:1]+s1[len(s1)-1:]
# print(s2)

# s ='save tiger'
# s = s.title()
# print(s)

# s=input('enter a string :')
# chrcount=0
# digtcount=0
# symbolcount=0
# for i in s:
#     if i.islower() or i.isupper():
#         i = i+1
#     elif i.isalnum():
#         digtcount = digtcount + 1
#     else:
#         symbolcount = symbolcount + 1
# print('total ')
# print
        
# s1 = input('enter a string')
# c= 0
# for i in s1:
#     if i.isspace():
#         c=c+1
    
# print('the no of letter is :',c)


# s = str(input('enter no of element and sepprat them using space'))
# scount=s.count(' ')
# l=list(s)

# for i in range(scount):
#     l.remove(' ')
# print(l)

# l =[1,2,2,3,2]
# li=l.copy()
# print(li)

# print(id(l))
# print(id(li))

# l=[1,2,3]

# # # print(l.pop(4))
# # # print(l)
# # print(l.index())

# mark = eval(input('enter mar:-'))
# s=sum(mark)
# print(s)
# print(mark)


# t=eval(input('enter a tupple seprat by coma:-'))

# t=(1,2,3,4,5,6,4,5)
# for e in t:
#     print(e)
#     if(t.count(e))>1:
#         print('contan dup')
#         break

# t=(10,9,8.5,5,5,2,6)
# print('orag tup ',t,'data type ',type(t),'id ',id(t))

# tl=list(t)
# tl[-3]=5.5
# t = tuple(tl)
# print('modefy tuple is  tup ',t,'data type ',type(t),'id ',id(t))

# tup = (39,4,67,25,10,80.5,60.4,-45,-8)
# tup_shored = tuple(sorted(tup))

# print(tup_shored,'data type ',type(tup_shored),'id ',id(tup_shored))

# # t = eval(input('enter a tuple and seprat by coma'))
# t = (39,4,67,25,10,80.5,60.4,-45,-8)
# m = max(t)
# i=t.index(m)
# print('max val of tup is ',m,'index val is ',i)

# tup = ('cat','mat','sat','rat')
# print('rat' in tup)
# print('bat' in tup)

# s = 'Hello tuple'

# t = tuple(s)

# print(t[2:3:-1])
# print(t[::-1])
# print(t[0::-1])
# txt = 'Kindly pay the due fees before 29th feb 2024 to avoid penalty of rs 500. Kindly ignore if already paid upto 4th Quarter'
# ward = txt.split()
# ward.sort(reverse=True)
# print(ward)
# d={'Andhra Pradesh':'Amaravati','Arunachal Pradesh':'Itanagar','Assam':'Dispur','Bihar':'Patna','Chhattisgarh':'Raipur','Goa':'Panaji','Gujarat':'Gandhinagar'}

# for i in range (len(d)):
#     print(d.keys,d.values)
# d=dict()
# c=65
# for i in range (26):
#     d[i+1]=chr(i+c)/
    
# print(d)
# d = {1: 'A', 2: 'B', 3: 'C', 4: 'D', 5: 'E', 6: 'F', 7: 'G', 8: 'H', 9: 'I', 10: 'J', 11: 'K', 12: 'L', 13: 'M', 14: 'N', 15: 'O', 16: 'P', 17: 'Q', 18: 'R', 19: 'S', 20: 'T', 21: 'U', 22: 'V', 23: 'W', 24: 'X', 25: 'Y', 26: 'Z'}

# for k,v in d.items():
#     print(k,'---->',v)

# import math as m

# print('quar equation of type: aX^2 + bX + C')
# a = float(input('enter vale of a :- '))
# b = float(input('enter vale of b :- '))
# c = float(input('enter vale of c :- '))

# D = m.sqrt(((b**2)-4*a*c))
# if D >0:
#     x1=(-b+D)/2*a
#     x2=(-b-D)/2*a

#     print('root od quard Are x = ',x1 ,',',x2)
# elif D<0:


    
# else:
#     print('it comes in complex form')

