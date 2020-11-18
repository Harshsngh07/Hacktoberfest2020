#find average of list in python
def findAvg(array): 
    return sum(array) / len(array) 
   
array = [12,16,2,8,24,10] 
average = findAvg(array) 
 
print("The average of the list is: ", average)