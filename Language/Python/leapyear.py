__author__ = 'Shahbaz_Akhtar'
year=int(input("Enter a year : "))
if(year % 4 ==0 or year % 400 ==0 and year % 100 !=0):
    print("leap year")
else:
    print("Not a leap year")
