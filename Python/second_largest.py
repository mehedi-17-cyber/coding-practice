def second_largest(lst):
	lst = sorted(set(lst))
	if len(lst) >= 2:
		print("Second largest :",lst[-2])
	else:
		print("No second largest number!")


lst = map(int,input("Enter elements separated by space : ").split())
second_largest(lst)