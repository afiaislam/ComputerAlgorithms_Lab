import array as ar
arr=ar.array('i',[])

n=int(input("Enter the size of an array: "))

print("Enter the elements of an array: ")

for i in range(n):
    x=int(input())
    arr.append(x)

print("The unsorted array elements are: ")
print(arr)

for i in range(1,n):
    key=arr[i]
    j=i-1

    while j>=0 and arr[j]>key:
        arr[j+1]=arr[j]
        j=j-1
        arr[j+1]=key

print("After sorting the array elements are: ")
print(arr)

print()

