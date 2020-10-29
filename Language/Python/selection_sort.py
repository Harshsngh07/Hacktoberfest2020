def swap(list, po1, po2):
    list[po1], list[po2] = list[po2], list[po1]
    return list

def selection(list):
    mini = list[0]
    for i in range(0, len(list)):
        mini = i#take first number to the left
        for ii in range(i + 1, len(list)):
            if (list[mini] > list[ii]):#if it is bigger than a number on his right, swap them...
                mini = ii
        swap(list, i, mini)
    return list

lst = input("Enter a list of numbers separated by spaces\n").split()#get input list and split it
lst = selection(lst)
print("sorted list: ", end = '')
print(*lst, sep = ' ')

