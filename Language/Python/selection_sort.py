def swap(list, po1, po2):
    list[po1], list[po2] = list[po2], list[po1]
    return list

def selection(list):
    op = 0
    mini = list[0]
    list2 = []
    for i in range(0, len(list)):
        mini = i
        for ii in range(i + 1, len(list)):
            op += 1
            if (list[mini] > list[ii]):
                mini = ii
        swap(list, i, mini)
    return list

lst = input("Enter a list of numbers separated by spaces\n").split()
lst = selection(lst)
print("sorted list: ", end = '')
print(*lst, sep = ' ')

