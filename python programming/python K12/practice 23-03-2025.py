# CSV file

import csv

def f_csvwrite():
    f = open('writing csv 1.csv','w')
    print(f)                # <_io.TextIOWrapper name='writing csv 1.csv' mode='w' encoding='cp1252'>
    cursor = csv.writer(f)
    print(cursor)           # <_csv.writer object at 0x0000019D6447A4A0>
    a = cursor.writerow(['Name','Class','section'])
    
    print(a)                # 20
    f.close()

# f_csvwrite()

def f_CSVread():
    f = open('writing csv 1.csv','r')
    Cursor = csv.reader(f)
    data = list(Cursor)
    print(Cursor)
    print(data)
    f.close()


# f_CSVread()

def CSVread2():
    f = open('writing csv 1.csv','r')
    cursor = csv.reader(f)
    print(cursor)
    data = list(cursor)
    f.close()
    for i in data:
        # print(i)
        print(i[0],'\t',i[1],'\t',i[2])

# CSVread2()

data = [['Name', 'Class', 'section'],
        ['adawd', '12', 'A'],
        ['dawdd', '12', 'B'],
        ['dawdd', '12', 'C'],
        ['dawdd', '12', 'A'],
        ['dfdf', '12', 'B'],
        ['dasd', '12', 'C'],
        ['cxcvcv', '12', 'A'],
        ['rerer', '12', 'B'],
        ['tytgtg', '12', 'C'],
        ['vxvf', '12', 'A'],
        ['hthyjyj', '12', 'B'],
        ['jyjhrg', '12', 'C'],
        ['rgrgrg', '12', 'A'],
        ['dee', '12', 'B'],
        ['deff', '12', 'C'],
        ['grgrg', '12', 'A'],
        ['fefg', '12', 'B'],
        ['grgrg', '12', 'C'],
        ['vfvfbef', '12', 'A'],
        ['efefef', '12', 'B']
]

def f_csvwrite2(data):
    f = open('writing csv 1.csv','w',newline='\n')
    print(f)                # <_io.TextIOWrapper name='writing csv 1.csv' mode='w' encoding='cp1252'>
    cursor = csv.writer(f)
    print(cursor)           # <_csv.writer object at 0x0000019D6447A4A0>
    # a = cursor.writerow(['Name','Class','section'])
    for i in data:
        cursor.writerow(i)
    # print(a)                # 20
    f.close()

# f_csvwrite2(data)

def f_CSVuserwrite():
    f = open('writing csv 1.csv','a',newline='\n')
    cursor = csv.writer(f)
    while True:
        # structure is ['Name', 'Class', 'section']
        n = input('Enter Name :')
        c = int(input('Enter Class :'))
        s = input('Enter Section :')
        cursor.writerow([n,c,s])
        print('Record has been Added')

        print('Do you want to add more record yes/no')
        ch = input('Enter your choice :')
        ch = ch.upper()
        if ch == ('Y' or 'YES') :
            print('-'*50)
        else:
            break
    f.close()

f_CSVuserwrite()


# ------------------------------Stack------------------------------

# stack = []

# stack.append('Element 1')
# stack.append('Element 2')
# stack.append('Element 3')
# stack.append('Element 4')
# stack.append('Element 5')

# print('Initial stack')
# print(stack)

# print('\nElement popped out from stack:')
# print(stack.pop())
# print(stack.pop())
# print('\nStack after element are popped out :')
# print(stack)
