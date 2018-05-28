

# Naive approach is to simply run two loops and pick elements from both arrays.  One by one check that both elements sum is equal to given value x or not.  
def findPairs(arr1, arr2, n, m, x):
	for i in range(0,n):
		for j in range(0,m):
			if(arr1[i] + arr2[j] == x):
				print(arr1[i], arr2[j])


arr1 = [1,2,3,7,5,4]
arr2 = [0,7,4,3,2,1]

n = len(arr1)
m = len(arr2)

x = 8

findPairs(arr1,arr2,n,m,x)

