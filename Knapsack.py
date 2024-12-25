import array as ar

def knapsack(W,w,v,n):
    
    arr={}
    V=0
    vw=ar.array('f',[])
    for i in range(n):
        x=v[i]/w[i]
        vw.append(x)
    for i in range(n):
        for j in range( n - i - 1):
            if vw[j] < vw[j + 1]:  
                
                temp = vw[j]
                vw[j] = vw[j + 1]
                vw[j + 1] = temp

                tempW=w[j]
                w[j]=w[j+1]
                w[j+1]=tempW

                tempV=v[j]
                v[j]=v[j+1]
                v[j+1]=tempV

    print(vw)
    for i in range(n):
        if W==0:
            return(V,arr)
        if w[i]<W:
            a=w[i]
        else:
            a=W
        V=V+(a*(v[i]/w[i]))
        w[i]=w[i]-a
        arr[i]=a
        W=W-a
    return(V,arr)

n=int(input("Enter the size of an array: "))
v=ar.array('i',[])
w=ar.array('i',[])
print("Enter all the values: ")
for i in range(n):
    x=int(input())
    v.append(x)
print("Enter all the weight: ")
for i in range(n):
    x=int(input())
    w.append(x)

W=int(input("Enter the Capacity: "))
z=knapsack(W,w,v,n)
print("Maximum value and the array are: ",z)