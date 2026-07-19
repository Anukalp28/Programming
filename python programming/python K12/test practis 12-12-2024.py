
# try:
#     i = int(input("first no"))
#     j = int(input("second no"))
#     c = i/j
#     print(c)
# except ZeroDivisionError :
#     print("divide by zero")
#     if j == 0:
#         j = 1
# except ValueError :
#     print("value error")
# else:
#     print("execute successfully")
# finally:
#     print("final oration")
#     c = i/j
#     print(c)


# file handling
#example no 2

# file1 = open('myfile.txt','w')
# # l = ['this is jaipur \n','this is noida \n','this is puri \n','this is banguluro \n']
# l = 'this is jaipur \nthis is noida \nthis is puri \nthis is banguluro \n'
# file1.write('halow \n')
# file1.write(l)
# file1.close()

# file1 = open('myfile.txt','r+')
# print('output of read() fun is -----')
# print(file1.read(15))
# print()

# file1.seek(0)
# print('the out put of readline() fun is --------')
# print(file1.readline())
# print(file1.tell())
# print()
# try:
#     n = 0
#     while True:
        
#         file1.seek(n)
#         print(file1.readline())
#         # print()
#         n = file1.tell()
#         # print(n)
#         if n == file1.tell():
#             break
# except :
#     print('errrrrrrrrrrrrrrrrrrrrrr')
# file1.seek(0)


# print("out put of",'read(9)','function is ')
# print(file1.read(9))
# print()

# file1.seek(0)
# print("out put of",'readline(9)','function is ')
# print(file1.readline(160))
# print()
# file1.seek(0)
# print("out put of",'readlines()','function is ')
# print(file1.readlines())
# print()

# file1.close

import pickle as pk

def bf_append():
    f = open('cs.dat','ab')
    data = []
    print("append data")

    pcod = int(input('enter player cod :'))
    pname = input('enter player name :')
    scor = int(input('enter player scor :'))

    data.append([pcod,pname,scor])
    pk.dump(data,f)
    f.close()

def bf_read():
    f = open('cs.dat','rb')
    print('-'*70)
    print('data stores in file')
    try:
        while True:
            data = pk.load(f)
            # print(data)
            
            for i in data :
                print('player cod',i[0])
                print('player name',i[1])
                print('player scor',i[2])
                print('-'*70)
    except Exception :
        # print('errrrrrrrrrrrrr')
        f.close()

# def bf_search():
#     f = open('cs.dat','rb')
#     pc = int(input('player cod :'))
#     tf = 0
#     try:
#         while True:
#             data = pk.load(f)
#             for i in data:
#                 if i[0] == pc:
#                     print('player name :',i[1])
#                     print('player scor :',i[2])
#                     tf = 1
#                     break

#     except Exception:
#         print('Errrrrrrrrrrrrrrrrr')
#         f.close()
#     if tf == 0:
#         print('Rcord is found')
#     else:
#         print('Record is found')


# import pickle as pk
# import os 

# def bf_update():
#     f = open('cs.dat','rb')
#     f1 = open('temp.dat','wb')
#     pc = int(input('enter player code :'))
#     f.seek(0) 
#     try:
#         while True:
#             cu_pos = f.tell()
#             data = pk.load(f)
#             for i in data:
#                 if i[0] == pc:
                    
#                     i[1] = input('enter new player name :')
#                     i[2] = int(input('eter new scor :')) 
#                     f.seek(cu_pos)
#                     pk.dump(data,f1)
#                     break
#     except Exception:
#         print('errr')
#     f.close() 
#     os.remove('cs.dat')
#     os.rename('temp.dat','cs.dat')

# bf_read()
# bf_update()
# bf_read()

# f = open('cs.dat','rb+')
# data = pk.load(f)
# print(data)

# def update2():
#     data = []
#     f = open('cs.dat','rb+')
#     pc = int(input('enter player no to update: '))
#     ty = 0
#     try:
#         while True:
#             cu_pos = f.tell()
#             data = pk.load(f)
#             if data[0][0] == pc:
#                 data[0][1] = input('enter new player name :')
#                 data[0][2] = int(input('eter new scor :')) 
#                 f.seek(cu_pos)
#                 pk.dump(data,f)
#                 ty = 1
#     except EOFError:
#         if ty == 0:
#             print('Rcord is found')
#         else:
#             print('Record is found')
#     f.close()

# bf_read()
# update2()
# bf_read()

# l = [[1, 'abc', 20]]
# print(l[0][0])

# for i in range(4):
#     bf_append()

# bf_append()
# bf_read()




                
# def bf_delete():
#     f = open('cs.dat','rb')
#     data = pk.load(f)
#     f.close()
#     pcod = int(input('player code to delet'))
#     f = open('cs.dat','wb')
#     lst = []
#     for i in data :
#         if i[0] == pcod :
#             continue
#         lst.append(i)
#     pk.dump(list,f)
#     f.close()

# from csv import writer
# def csv():
#     f = open('sample.csv','a',newline='\n')
#     cur = writer(f)
#     while True:
#         n = input('enter naem :')
#         c = input('enter class :')
#         s = input('Enter section :')
#         cur.writerow([n,c,s])
#         print('record is added ')
#         print('y/n')
#         ch = input()
#         ch = ch.upper()
#         if  ch == 'Y' :
#             print('-'*70)
#         else:
#             break
#     f.close()

# from csv import reader
# def csvreder():
#     f = open('sample.csv','r')
#     dt = reader(f)
#     print(dt)
#     data = list(dt)
#     f.close()
#     for i in data:
#         print(i)

# csvreder()

# stack = []
# stack.append('Element1')
# stack.append('Element2')
# stack.append('Element3')
# stack.append('Element4')

# print("Initial stack")
# print(stack)

# print(stack.pop())
# print(stack.pop())

# print('final stack')
# print(stack)

#########[hostal no ,total no of student,total rooms]
# hostal = [[1,20,20],
#           [2,20,10],
#           [3,25,20],
#           [4,40,20],
#           [5,50,30]

# ]

# def push(hostal):
#     hn = int(input('Enter hostal no: '))
#     ts = int(input('Enter no of student: '))
#     tr = int(input('Enter total rooms: '))
#     temp = [hn,ts,tr]
#     hostal.append(temp)

# def pop(hostal):
#     if hostal ==[]:
#         print('NO record found')
#     else:
#         print('deleted record is ',hostal.pop())

# def display(hostal):
#     l = len(hostal)
#     print('Hostal Number\tTotal student\tTotal Roomse')
#     for i in range(l-1,-1,-1):
#         print(hostal[i][0],'\t\t',hostal[i][1],'\t\t',hostal[i][2])



import pickle as pk

def bf_update():
    try:
        f = open('cs.dat','r+b')
        pc = int(input('Player code to update record : '))

        while True:
            cu_pos = f.tell()
            try:
                data = pk.load(f)
            except EOFError:
                break
            
            for i in data:
                if i[0] == pc:
                    i[1] = input('Enter new name : ')
                    i[2] = int(input('enter new score'))

                    f.seek(cu_pos)
                    pk.dump(data,f)
                    break
    except Exception:
        print('error')
        f.close()

def bf_update8():
    f = open('cs.dat','r+b')
    pc = int(input('Player code to update record : '))
    temp = []
    try:
        while True:
            data = pk.load(f)
            print(data)
            
            for i in data:
                if i[0][0] == pc:
                    pn = input('Enter new name : ')
                    ps = int(input('enter new score'))

                    temp.append([pc,pn,ps])
                else:
                    temp.extend(data)
            f.seek(0)
            pk.dump(temp,f)
    except Exception:
        f.close()

bf_read()
bf_update8()