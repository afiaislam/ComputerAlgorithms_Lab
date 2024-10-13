import array as ar

def findMaxCrossSubarray(arr, low, mid, high):
    left_sum = -1000
    sum = 0
    for i in range(mid, low - 1, -1):
        sum = sum + arr[i]
        if sum > left_sum:
            left_sum = sum
            max_left = i

    right_sum = -1000
    sum = 0
    for j in range(mid + 1, high + 1):
        sum = sum + arr[j]
        if sum > right_sum:
            right_sum = sum
            max_right = j
    
    return max_left, max_right, left_sum + right_sum

def findMaxSubarray(arr, low, high):
    if high == low:
        return low, high, arr[low]
    else:
        mid = (low + high) // 2
        left_low, left_high, left_sum = findMaxSubarray(arr, low, mid)
        right_low, right_high, right_sum = findMaxSubarray(arr, mid + 1, high)
        cross_low, cross_high, cross_sum = findMaxCrossSubarray(arr, low, mid, high)

        if left_sum >= right_sum and left_sum >= cross_sum:
            return left_low, left_high, left_sum
        elif right_sum >= left_sum and right_sum >= cross_sum:
            return right_low, right_high, right_sum
        else:
            return cross_low, cross_high, cross_sum


arr = ar.array('i', [])
n = int(input("Enter the size of an array: "))
print("Enter the array elements: ")

for i in range(n):
    x = int(input())
    arr.append(x)

print("The array elements are: ", arr)
low, high, sum = findMaxSubarray(arr, 0, n - 1)

print("Low : ", low,"   High : ", high,"  Maximum Sum of subarray : ", sum)
