"""  To read a matrix of size m*n from the keyboard and display the 
same on the screen using function.   """

def display_mat(m,n):
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

m=int(input("Enter the size of Row: "))
n=int(input("Enter the size of Column: "))

display_mat(m,n)




