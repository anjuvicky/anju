def linearSearch(arr, n):
    for i in range(n):
        if arr[i] is i:
            return i
    
    return -1
 

arr = [-10, -1, 0, 2, 10, 11, 45, 50, 100]
n = len(arr)
print("Fixed Point is " + str(linearSearch(arr,n)))
 
