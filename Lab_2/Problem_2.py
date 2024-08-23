"""
    0
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1

"""

n=int(input("Enter the size of Row: "))

for i in range(n+1):
    for j in range(i):
        if(i+j)%2==0:
            print(1,end=" ")
        else:
            print(0,end=" ")
    
    print()