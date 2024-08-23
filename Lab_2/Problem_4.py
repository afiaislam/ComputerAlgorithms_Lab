"""  Make the row parameter of the matrix as a default argument.  """

def display_mat(n,m=3):
    list=[]
    print("Enter the elements of a matrix :")
    for i in range(m):
        in_list=[]
        for j in range(n):
            val=int(input())
            in_list.append(val)
        list.append(in_list)
    
    print("The matrix is:")
    for row in list:
        for ele in row:
            print(ele, end=" ")
        print()


n=int(input("Enter the size of Column: "))

temp=0
print("Do you want to enter the row size? \nIf you want press 1 :")
temp=int(input())
if temp==1:
    m=int(input("Enter the size of Row: "))
    display_mat(n,m)

else: 
    display_mat(n)