#-------------Questions 4 ----------------
# english   =float(input("Enter Marks obtain in english "))
# maths     =float(input("Enter Marks obtain in maths"))
# computer  =float(input("Enter Marks obtain in computer"))
# physics   =float(input("Enter Marks obtain in physics "))
# chemistry =float(input("Enter Marks obtain in chemistry"))

# total = english + maths + computer + physics + chemistry

# percentage = (total/500)*100    
# print('Total marks = %.2f'%total)
# print('marks percentage = %.2f'%percentage)

# if(percentage >= 90):
#     print("A Grade")
# elif(percentage >= 80):
#     print("B Grade")
# elif(percentage >= 70):
#     print("C Grade")
# elif(percentage >= 60):
#     print("D Grade")
# elif(percentage >= 40):
#     print("E Grade")
# else:
#     print("Fail")


#-------------Questions 5 ----------------

number = int(input("enter the number : "))
sum = 0
Temp = number

while(Temp > 0):
    Factorial = 1
    i = 1
    Remainder = Temp % 10
    while(i <= Remainder):
        Factorial = Factorial * i
        i = i + 1
    print('\n Factorial of %d = %d' % (Remainder,Factorial))
    sum = sum + Factorial
    Temp = Temp // 10
print('\n sum of factorials of a given number %d = %d'%(number,sum))
if (sum == number):
    print("%d is a strong number" %number)
else:
    print("%d is not a strong number" %number)
#-------------Questions 7 ----------------
# row = 5
# k = 2* row - 2
# for i in range(0,row):
#     for j in range(0,k):
#         print(end=" ")
#     k = k - 1
#     for j in range(0,i+1):
#         print("*",end=" ")
#     print(" ")
# k = row - 2
# for i in range(row , -1, -1):
#     for j in range(k,0,-1):
#         print(end=" ")
#     k = k + 1
#     for j in range(0,i+1):
#         print("*",end=" ")
#     print(" ")

#-------------Questions 9 ----------------
# str1 = input("Please enter your string")
# ch = input("Please enter your character in string : ")
# newch = input("please enter the new character : ")
# str2 = ' '
# for i in range(len(str1)):
#     if(str1[i] == ch):
#         str2 = str2 + newch
#     else:
#         str2 = str2 + str1[i]
# print("\noriginal string :",str1)
# print("modified string :",str2)
#-------------Questions  10 ----------------
# max = int(input("please enter the maximum value : "))
# print("palindrome number of between 1 and %d are : "%(max))
# for num in range(1,max+1):
#     temp =num
#     reverse = 0
#     while(temp > 0):
#         remander = temp%10
#         reverse = (reverse*10) + remander
#         temp = temp//10
#     if (num == reverse):
#         print("%d "%num,end= ' ')
#-------------Questions  pg 58-59 ,1 ----------------

# emails =tuple()
# username = tuple()
# domainname = tuple()

# n = int(input("how many emails ids you want to enter? : "))
# for i in range(0,n):
#     emid = input(">" )
#     emails = emails + (emid,)
#     spl = emid.split("@")
#     username = username + (spl[0],)
#     domainname = domainname + (spl[1],)


# print("\nThe email ids in the tuple are :")
# print(emails)

# print("\nThe username in the email ids are :")
# print(username)

# print("\nThe domainname in the email ids are :")
# print(domainname)
#-------------Questions  pg 58-59 ,2 ----------------
# import random as r
# import string as s
# randomsource  = s.ascii_letters + s.digits + s.punctuation
# password = r.sample(randomsource, 6)
# password += r.sample(s.ascii_letters ,2)
# password += r.choice(s.digits)
# password += r.choice(s.punctuation)
# passwordList = list(password)
# r.SystemRandom().shuffle(passwordList)
# password = ''.join(passwordList)
# print("Password is: ",password)

# #-------------Questions  pg 91-92 ,7 ----------------
# def add(p,q):
#     return p+q
# def sub(p,q):
#     return p-q
# def mul(p,q):
#     return p*q
# def div(p,q):
#     return p/q

# print('please select the operation.')
# print('a.add \n b.sub \n c.multiply \n d.divide')
# choice = input('please enter choice(a/b/c/d): ')
# n1 = int(input('please enter the first number : '))
# n2 = int(input('please enter the second number: '))

# if choice == 'a':
#     print(n1,'+',n2,'=',add(n1,n2))
# elif choice == 'b':
#     print(n1,'-',n2,'=',sub(n1,n2))
# elif choice == 'c':
#     print(n1,'*',n2,'=',mul(n1,n2))
# elif choice == 'd':
#     print(n1,'/',n2,'=',div(n1,n2))
# else:
#     print('This is an invalid input')

#-------------Questions  pg 91-92 ,8 ----------------
# def compute_lcm(x,y):
#     if x > y:
#         greater = x
#     else:
#         greater = y
#     while(True):
#         if((greater % x == 0) and (greater % y == 0)):
#             lcm = greater
#             break
#         greater += 1
#     return lcm
# n1 = 54
# n2 = 25
# print('The L.C.M is',compute_lcm(n1,n2))

#-------------Questions  pg 91-92 ,10 ----------------
# alphabets = ['a','b','d','e','i','j','o']
# def filter_vovals(alphabets):
#     vowels = ['a','e','i','o','u']
#     if(alphabets in vowels):
#         return True
#     else:
#         return False

# filtered_vowels = filter(filter_vovals,alphabets)
# print('The filtered vovals are: ')
# for vowel in filtered_vowels:
#     print(vowel)

