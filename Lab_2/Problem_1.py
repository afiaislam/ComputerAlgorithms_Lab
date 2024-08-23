"""
    1
    2 2
    3 3 3
    4 4 4 4 
"""

n=int(input("Enter the size of Row: "))

for i in range(n+1):
    for j in range(i):
        print(i,end=" ")
    
    print()
