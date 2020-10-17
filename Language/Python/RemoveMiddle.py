"""
Create a function named remove_middle which has three parameters named lst, start, and end.
The function should return a list where all elements in lst with an index between start and end (inclusive) have been removed.
For example, the following code should return [4, 23, 42] because elements at indices 1, 2, and 3 have been removed:
remove_middle([4, 8 , 15, 16, 23, 42], 1, 3)
"""

def remove_middle(lst,start,end):
  new_list= lst[:start] + lst[end+1:]
  return new_list

print(remove_middle([4, 8, 15, 16, 23, 42], 1, 3))