import array as ar
arr=ar.array('i',[])

def exchange(arr,i,j):
    temp=arr[i]
    arr[i]=arr[j]
    arr[j]=temp

def partition(arr,p,r):
    x=arr[r]
    i=p-1
    for j in range (p,r):
        if arr[j]<=x:
            i=i+1
            exchange(arr,i,j)
    exchange(arr,i+1,r)
    return i+1
def quicksort(arr,p,r):
    if p<r:        
        q=partition(arr,p,r)
        quicksort(arr,p,q-1)
        quicksort(arr,q+1,r)

n=int(input("Enter the array size: "))
print("Enter the array elements: ")

for i in range (n):
    x=int(input())
    arr.append(x)

quicksort(arr,0,n-1)
print("After sorting the array elements are: ",arr)


