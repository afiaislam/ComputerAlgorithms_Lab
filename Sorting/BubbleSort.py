import array as ar
arr=ar.array('i',[])

n=int(input("Enter the size of an array: "))

print("Enter the elements of an array: ")

for i in range(n):
    x=int(input())
    arr.append(x)

print("The unsorted array elements are: ")
print(arr)

for i in range(n):
    for j in range(n-i-1):
        if arr[j]>arr[j+1]:
            temp=arr[j]
            arr[j]=arr[j+1]
            arr[j+1]=temp

print("After sorting the array elements are: ")
print(arr)
print()