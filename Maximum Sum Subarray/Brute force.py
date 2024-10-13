import array as ar

arr = ar.array('i', [])
n = int(input("Enter the size of an array: "))
print("Enter the array elements: ")

for i in range(n):
    x = int(input())
    arr.append(x)

print("The array elements are: ", arr)

current_sum=-10000

for i in range(n):
    sum=0
    for j in range(i,n):
        sum+=arr[j]
        if sum>current_sum :
            current_sum=sum
            start=i
            end=j

print("The maximum sum of a subarray: ",current_sum," with starting index: ",start," and ending index: ",end)
