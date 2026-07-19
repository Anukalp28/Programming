# B = [34,21,3,12,34,56,76,5,4,21,12,34]
# # question no 1
# lst = eval(input("Enter the number list :-"))
# newlst = []
# for i in lst :
#     if i % 2 ==0:
#         newlst += [i]
# if newlst == []:
#     print("No even number is present in the given list")
# else:
#     newlst.sort()
#     print("largest even number in the list is :-",newlst[-1])

#-----question no 2
# import statistics as s
# lst = eval(input("Enter the number list :-"))
# median = s.median(lst)
# print("The median of the number is:-",median)

# # -----question no 3
# list1 = ['red', 'green', 'blue', 'white', 'black', 'orange']
# longest_word = max(list1, key=len)
# print(longest_word)

#-----question no 5
# list1 = [1, -2, 3, -4, 5, -6]
# for num in list1:
#     if num < 0:
#         list1.remove(num)
# print(list1)

#-----question no 6
import math as m

# the below code fragment can be found in:  https://github.com/

print('quad equation of type: aX^2 + bX + C')
a = float(input('enter vale of a :- '))
b = float(input('enter vale of b :- '))
c = float(input('enter vale of c :- '))

D = m.sqrt(((b**2)-4*a*c)) 

if D >0:
    x1=(-b+D)/2*a
    x2=(-b-D)/2*a
    print('root od quad Are x = ',x1,',',x2)
else:
    print('no root')


