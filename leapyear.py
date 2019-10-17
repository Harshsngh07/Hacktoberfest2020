__author__ = 'Shahbaz_Akhtar'
year=int(input("Enter a year : "))
if(year % 4 ==0):
    if(year % 100 ==0):
        if(year % 400 ==0):
            print("leap year")
        else:
            print("Not a leap year")
    else:
        print("leap year")
else:
    print("not a leap year")
