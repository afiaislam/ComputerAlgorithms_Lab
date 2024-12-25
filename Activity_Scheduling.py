def activity_scheduling(s, f):
    n = len(s)
    B = []  # To store selected activity indices

    # The first activity is always selected
    B.append(0)
    k = 0  # Index of the last selected activity

    for m in range(1, n):  # Start from the second activity
        if s[m] >= f[k]:  # Check if activity m starts after or when activity k finishes
            B.append(m)
            k = m  # Update k to the current activity index

    return B

# Input: Start and finish times of activities
n = int(input("Enter the number of activities: "))
s = []  # Start times
f = []  # Finish times

print("Enter the start times of the activities: ")
for i in range(n):
    s.append(int(input()))

print("Enter the finish times of the activities: ")
for i in range(n):
    f.append(int(input()))

for i in range(n):
        for j in range(0, n - i - 1):
            if f[j] > f[j + 1]:  # Compare finish times
                # Swap finish times
                temp = f[j]
                f[j] = f[j + 1]
                f[j + 1] = temp

                # Swap start times correspondingly
                temp = s[j]
                s[j] = s[j + 1]
                s[j + 1] = temp

# Find and print the selected activities
z = activity_scheduling(s, f)
print("Selected activities (0-based index):", z)
