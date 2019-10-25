#This is the code of the Python Program to map two lists into a dictionary. 
#The program output is also shown below.

keys=[]
values=[]
n=int(input("Enter number of elements for dictionary:"))
print("For keys:")
for x in range(0,n):
    element=int(input("Enter element" + str(x+1) + ":"))
    keys.append(element)
print("For values:")
for x in range(0,n):
    element=int(input("Enter element" + str(x+1) + ":"))
    values.append(element)
d=dict(zip(keys,values))
print("The dictionary is:")
print(d)
