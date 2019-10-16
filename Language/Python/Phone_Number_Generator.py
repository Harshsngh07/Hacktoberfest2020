#simple script that generates all of the possible (non-validated) US phone numbers for a given area code

areacode = input("Please enter the three digit area code: ")
for x in range(1000):
	a = str(x).zfill(3)
	for y in range(10000):
		b = str(y).zfill(4)
		print(str(areacode) + "-" + str(a) + "-" + str(b))