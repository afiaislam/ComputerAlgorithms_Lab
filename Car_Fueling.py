def min_Refills(x,L,n):

    num_refills = 0
    current_refill = 0
    while current_refill<=n:
        last_refill = current_refill
        while current_refill <=n and x[current_refill+1] - x[last_refill] <= L :
            current_refill = current_refill + 1
        if current_refill == last_refill :
            return "IMPOSSIBLE"
        if current_refill <= n :
            num_refills = num_refills + 1
    return num_refills

x=[0,200,375,550,750,950]
L=400
n=4
z=min_Refills(x,L,n)
print(z)