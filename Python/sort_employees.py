employees = [
	{"name":"John","salary":43000},
	{"name":"Bob","salary":48000},
	{"name":"Jack","salary":54000},
	{"name":"Jian","salary":48000},
	{"name":"Maria","salary":50000},
	{"name":"Michael","salary":47000},
	{"name":"Eva","salary":57000},
	{"name":"Samantha","salary":49000},
	{"name":"Alyssa","salary":44000}
]

# highest salary is  first 
employees.sort(key = lambda emp : emp["salary"],reverse = True)

print(f"{"Name":<20}{"Salary":>10}")
print("-"*30)

for emp in employees:
	print(f"{emp["name"]:<20}{emp["salary"]:>10}")