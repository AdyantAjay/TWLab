Basic = float(input("Enter the basic : "))
Grade = input("Enter the grade : ")

HRA = 20*Basic/100
DA = 50*Basic/100
PF = 11*Basic/100
Allow = 0

if(Grade == 'A'):
	Allow = 1700
elif(Grade == 'B'):
	Allow = 1500
elif(Grade == 'C'):
	Allow = 1300		
	
Gross_Salary = Basic + HRA + DA + Allow - PF

print("Gross Salary :",Gross_Salary)		
