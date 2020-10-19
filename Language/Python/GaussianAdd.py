#An algorithm for Gaussian Addition in Python
#basically it shows the inner working of the formula [n*(n+1)]/2
length=int(input("Enter the number till which you want to add (Eg: 1 to 20, enter 20): "))
#a list with all the numbers
numbers=[x for x in range(1,length+1)]

i=sum=0
j=len(numbers)-1

while i<len(numbers) and j>=0:
    print("{} + {} = {}".format(numbers[i],numbers[j],(numbers[i]+numbers[j])))
    while i<j:
        sum += numbers[i] + numbers[j]
        break
    i+=1
    j-=1
    
print("Sum:",sum)
