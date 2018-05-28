l = [1,0,1,1,0,1]

count = 0
maxx= 0

for i in range (0, len(l)):
	#print("the value of l is", l[i])
	if l[i] == 1:
		count += 1
		print("The count of l[i] is ", l[i],"count", count)
		if count > maxx:
						
			maxx = count
	else:
		count = 0
