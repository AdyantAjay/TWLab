##This method returns if the year is a leap year or not 		
##@param year : It is the parameter of the method
##@return If year is a leap year or not

def isLeapYear(year):	
	if(year%4 == 0 and year%100 != 0):
		return 1
	elif(year%400 == 0):
		return 1
	else:
		return 0

year = input("Enter the year : ")
year=int(year)

if(isLeapYear(year)):
	print(year,"is leap year")
else:
	print(year,"is not leap year")	
