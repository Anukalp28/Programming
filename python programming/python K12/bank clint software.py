import mysql.connector as m
Bserver = m.connect(host ='localhost',
                    user ='root',
                    passwd ='tiger',
                    database ='bank'
                    )

def openAcc():
    print('-----------------OPEN NEW ACCOUNT-----------------')
    
    n = input('Enter Name :')
    ac = int(input("Enter Account No :"))
    print('D.O.B Format :YYYY-MM-DD')
    dob = input("Enter D.O.B  :")
    ph = input("Enter Phone No :")
    ad = input("Enter Address :")
    ob = float(input("Enter Opening Balance :"))

    data1 = (n,ac,dob,ad,ph,ob)
    data2 = (n,ac,ob)

    sql1 = 'insert into account_details values(%s,%s,%s,%s,%s,%s)'
    sql2 = 'insert into amount values(%s,%s,%s)'

    c = Bserver.cursor()
    c.execute(sql1,data1)
    c.execute(sql2,data2)
    Bserver.commit()
    print("Data Entered Successfully")
    print('-------------------------------------------------')
    main()

def depoAcc():
    print('------------------DEPOSIT AMOUNT------------------')
    
    am = float(input("Enter Amount : "))
    ac = int(input("Enter Account No : "))
    a = 'select balance from amount where account_no = %s'
    data = (ac,)
    c = Bserver.cursor()
    c.execute(a,data)
    result = c.fetchone()
    tam = result[0] + am
    sql = "update amount set balance = %s where account_no = %s"
    d = (tam,ac)
    c.execute(sql,d)
    Bserver.commit()
    print('-------------------------------------------------')
    main()

def witham():
    print('-----------------WITHDRAW AMOUNT-----------------')
    
    am = float(input("Enter Amount :"))
    ac = int(input("Enter Account No :"))
    a = 'select balance from amount where account_no = %s'
    data = (ac,)
    c = Bserver.cursor()
    c.execute(a,data)
    result = c.fetchone()

    tam = result[0] - am
    sql = 'update amount set balance = %s where account_no = %s'
    d = (tam,ac)
    c.execute(sql,d)
    Bserver.commit()
    print('-------------------------------------------------')
    main()

def balance():
    print('-----------------BALANCE ENQUIRY-----------------')
    
    ac = int(input('Enter Account No :'))
    a = 'select balance from amount where account_no = %s'
    data = (ac,)
    c = Bserver.cursor()
    c.execute(a,data)
    result = c.fetchone()

    print('Balance for Account :',ac,'is',result[0])
    print('-------------------------------------------------')
    main()

def dispacc():
    print('-------------DISPLAY CUSTOMER DETAILS-------------')
    
    ac = int(input("Enter Account NO :"))
    a = 'select * from account_details where account_no = %s'
    data = (ac,)
    c = Bserver.cursor()
    c.execute(a,data)
    result = c.fetchone()

    print('-----------------ACCOUNT DETAILS-----------------')
    print('Name :',result[0],'\n'
          'account_No :',result[1],'\n'
          'date_of_birth :',result[2],'\n'
          'address :',result[3],'\n'
          'phone_no :',result[4],'\n'
          'opening_balance :',result[5]
          )
    print('-------------------------------------------------')
    main()

def closeac():
    print('-----------------CLOSE AN ACCOUNT-----------------')
    
    ac = int(input("Enter Account NO :"))
    sql1 = 'delete from account_details where account_no = %s'
    sql2 = 'delete from amount where account_no = %s'
    data = (ac,)
    c = Bserver.cursor()
    c.execute(sql1,data)
    c.execute(sql2,data)
    Bserver.commit()
    print('-------------------------------------------------')
    main()

def main():
    print('''
    1. OPEN NEW ACCOUNT
    2. DEPOSIT AMOUNT
    3. WITHDRAW AMOUNT
    4. BALANCE ENQUIRY
    5. DISPLAY CUSTOMER DETAILS
    6. CLOSE AN ACCOUNT
    ''')

    choice = int(input("Enter task No :"))
    if choice == 1:
        openAcc()
    elif choice == 2:
        depoAcc()
    elif choice == 3:
        witham()
    elif choice == 4:
        balance()
    elif choice == 5:
        dispacc()
    elif choice == 6:
        closeac()
    else:
        print("wrong choice .............")
        print('-------------------------------------------------')
        main()
main()
