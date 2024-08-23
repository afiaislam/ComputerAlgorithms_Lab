# To find a prime number within a range.


def isPrime(num):
    for i in range(2,int(num**0.5)+1):
        if(num%i==0):
            return 0
    return 1

n1=int(input("Enter the 1st number: "))
n2=int(input("Enter the last number: "))

print("The prime number between ",n1," and ",n2," are: ")

for i in range(n1,n2+1):
    if isPrime(i):
        print(i,end=" ")