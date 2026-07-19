# # file handling

# f = open('keeping quiet.txt','r')

# print(f.read())
# print(f.readline())
# print('-'*50)
# # print(f.read(14))

# print(f.readline(50))

# f.close()

# read txt line by line 
# f = open(r'C:\Users\LENOVO\Documents\python programming\python class 12\keeping quiet.txt','r')
# f = open('C:\\Users\\LENOVO\\Documents\\python programming\\python class 12\\keeping quiet.txt','r')
# myline = f.readline()
# while myline :
#     print(myline)
#     myline = f.readline()
# f.close()

#a=['Now we will count to twelve\n', 'and we will all keep still.\n', 'For once on the face of the Earth\n', 'letâ€™s not speak in any language,\n', 'letâ€™s stop for one second,\n', 'and not move our arms so much.\n', 'It would be an exotic moment\n', 'without rush, without engines,\n', 'we would all be together\n', 'in a sudden strangeness.\n', 'Fishermen in the cold sea\n', 'would not harm whales\n', 'and the man gathering salt\n', 'would look at his hurt hands.\n', 'Those who prepare green wars,\n', 'wars with gas, wars with fire,\n', 'victory with no survivors,\n', 'would put on clean clothes\n', 'and walk about with their\n', 'brothers\n', 'in the shade, doing nothing.\n', 'What I want should not be\n', 'confused\n', 'with total inactivity.\n', 'Life is what it is about;\n', 'I want no truck with death.\n', 'If we were not so single-minded\n', 'about keeping our lives moving,\n', 'and for once could do nothing,\n', 'perhaps a huge silence\n', 'might interrupt this sadness\n', 'of never understanding ourselves\n', 'and of threatening ourselves with\n', 'death.\n', 'Perhaps the Earth can teach us\n', 'as when everything seems dead\n', 'and later proves to be alive.\n', 'Now Iâ€™ll count up to twelve\n', 'and you keep quiet and I will go.']
#a=['Now we will count to twelve\n', 'and we will all keep still.\n', 'For once on the face of the Earth\n', 'letâ€™s not speak in any language,\n', 'letâ€™s stop for one second,\n', 'and not move our arms so much.\n', 'It would be an exotic moment\n', 'without rush, without engines,\n', 'we would all be together\n', 'in a sudden strangeness.\n', 'Fishermen in the cold sea\n', 'would not harm whales\n', 'and the man gathering salt\n', 'would look at his hurt hands.\n', 'Those who prepare green wars,\n', 'wars with gas, wars with fire,\n', 'victory with no survivors,\n', 'would put on clean clothes\n', 'and walk about with their\n', 'brothers\n', 'in the shade, doing nothing.\n', 'What I want should not be\n', 'confused\n', 'with total inactivity.\n', 'Life is what it is about;\n', 'I want no truck with death.\n', 'If we were not so single-minded\n', 'about keeping our lives moving,\n', 'and for once could do nothing,\n', 'perhaps a huge silence\n', 'might interrupt this sadness\n', 'of never understanding ourselves\n', 'and of threatening ourselves with\n', 'death.\n', 'Perhaps the Earth can teach us\n', 'as when everything seems dead\n', 'and later proves to be alive.\n', 'Now Iâ€™ll count up to twelve\n', 'and you keep quiet and I will go.']

# v = [1,2,3,4,5,6]
# f = open('keeping quiet.txt','r')
# myline = f.readlines()
# # while myline :
# #     print(myline)
# #     myline = f.readlines()
  
# print(myline)

# f.close()


# f = open('writing 1','w')
# # a = f.write('hellvvvvvo\nwdawddawd\nwdadwd')
# a = f.write(['awdawdawd\n','awdawdadw\n'])
# print(a)

# # b = f.writelines('dwadaawdwd\nesssssssf')
# # print(b)
# f.close()

# cbse pyq 2024
# def COUT(x,loc):
    
#     f = open(loc,'r')
#     l = f.readline()
#     l_no = 0
#     while l :
#         c = 0
#         for i in l:
#             if i == str(x):
#                 c = c+1
#         l_no = l_no + 1
#         print('Line ',l_no,':',c)
#         l = f.readline()
#     f.close()
    
# COUT('a',r'C:\Users\LENOVO\Documents\python programming\python class 12\keeping quiet.txt')

# with open('keeping quiet.txt') as f:
#     data = f.read()

f = open('keeping quiet.txt','r')
# a = f.tell()
# data = f.read()
# # print(a)
# print(data)

# b = f.tell()
# print(b)
# print('-'*50)
# print(f.seek(0))
# print(f.read())
# f.close()

# f = open('writing b 1','wb')
# num = [5,10,15,20,25]
# arr = bytearray(num)
# a=f.write(arr)
# print(a)
# f.close()

# import pickle as pk
# empid = {1:'Anukalp',2:'101',3:'IT',4:'20',5:'Google'}

# f = open('writing b 1','wb')
# a = pk.dump(empid,f)
# b = pk.dumps(empid)
# print(a)
# print(b)
# f.close()

# import pickle as pk

# f = open('writing b 1','rb')
# emid = pk.load(f)
# f.close()
# print(emid)

# appending binary file 

import pickle as pk

def bf_append():
    f = open('writing b 1','ab')
    print('Appending data')
    # str is [pname ,pcod ,pscor, prank]
    pname = input('Enter pname :')    
    pcode = int(input('Enter pcode :'))    
    pscor = int(input('Enter pscor :'))
    prank = int(input('Enter prank :'))
    data = [pname,pcode,pscor,prank]
    pk.dump(data,f)
    f.close()
# for i in range(5):

#     bf_append()

def bf_read():
    f = open('writing b 1','rb')
    print('-'*80)
    print('Data stored in a file .....')
    try:
        while True :
            data = pk.load(f)
            print(data)
            # for r in range(1):
                # str is [pname ,pcod ,pscor, prank]
            print('pname : ',data[0])
            print('pcode : ',data[1])
            print('pscor : ',data[2])
            print('prank : ',data[3])
    except:
        # f.close()
        print('RuntimeError')
    finally:
        f.close()

# bf_read()

def bf_allrecord():
    f = open('writing b 1','rb')
    print('-'*80)
    print('all Data stored in file ....')
    try:
        # print('pname','\t\t','pcode','\t\t','pscor','\t\t','prank')
        while True:
            data = pk.load(f)
            # str is [pname ,pcod ,pscor, prank]
            print(data[0],'\t\t',data[1],'\t\t',data[2],'\t\t',data[3])
    except: 
        print('all data completed')
        print('RuntimeError')
    finally:
        f.close()
# bf_allrecord()

def bf_search():
    f = open('writing b 1','rb')
    pcode = int(input('Enter pcode :'))
    flag = 0
    try:
        while True:
            data = pk.load(f)
            # str is [pname ,pcod ,pscor, prank]
            if data[1] == pcode :
                print('pname : ',data[0])
                print('pcode : ',data[1])
                print('pscor : ',data[2])
                print('prank : ',data[3])
                flag = 1
                break
    except:
        pass
    finally:
        f.close()
        if flag == 0 :
            print('Record not found ....')
        else:
            print('record found.........')

# bf_search()
def bf_delete():
    f1 = open('writing b 1','rb')
    request = int(input('enter pcode to delete a record: '))
    list = []
    try:
        while True:
            data = pk.load(f1)
            # print(data)
            # str is [pname ,pcod ,pscor, prank]
            if data[1] == request :
                continue
            else:
                list.append(data)
    except:
        pass
    finally:
        f1.close()
        f2 = open('writing b 1','wb')
        # print(list)
        for i in list:
            pk.dump(i,f2)
        f2.close()

# for i in range(3):
#     bf_append()

# bf_allrecord()
# bf_delete()
# bf_allrecord()

def bf_update():
    f1 = open('writing b 1','rb')
    request = int(input('enter pcode to update a record: '))
    list = []
    f1.seek()
    try:
        while True:
            data = pk.load(f1)
            # print(data)
            # str is [pname ,pcod ,pscor, prank]
            if data[1] == request :                  
                    data[0] = input('Enter pname :')    
                    data[1] = int(input('Enter pcode :'))    
                    data[2] = int(input('Enter pscor :'))
                    data[3] = int(input('Enter prank :'))
                    list.append(data)
            else:
                list.append(data)
    except:
        pass
    finally:
        f1.close()
        f2 = open('writing b 1','wb')
        # print(list)
        for i in list:
            pk.dump(i,f2)
        f2.close()


# bf_allrecord()
# bf_update()
# bf_allrecord()


