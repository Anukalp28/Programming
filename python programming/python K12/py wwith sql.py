import mysql.connector

mydb = mysql.connector.connect(user = 'root', passwd = 'tiger', host = 'localhost',database = 'Hotel')
print(mydb)
        

cursor = mydb.cursor()
cursor.execute('show databases')

for db in cursor:
    print(db)
print(cursor)
for i in range(0,2):
    print('halo world database found in database ' ,+ i) # print the database                
    

