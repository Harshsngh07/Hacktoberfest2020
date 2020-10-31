__author__ = 'Shahbaz_Akhtar'
#enter the input and storing it in a variable as int datatype.
year=int(input("Enter a year : "))
#now checking the following conditions.
if(year % 4 ==0):
    if(year % 100 ==0):
        if(year % 400 ==0):
            print(""{0} is a leap year".format(year))
        else:
            print("{0} is not a leap year".format(year))
    else:
        print(""{0} is a leap year".format(year))
else:
    print("{0} is not a leap year".format(year))
#end of code.
