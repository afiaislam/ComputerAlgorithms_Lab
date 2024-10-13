#include <iostream>
using namespace std;

void findMaxCrossSubarray(int arr[], int low, int mid, int high, int &max_left, int &max_right, int &cross_sum) {
    int left_sum = -1000;
    int sum = 0;
    for (int i = mid; i >= low; i--) {
        sum += arr[i];
        if (sum > left_sum) {
            left_sum = sum;
            max_left = i;
        }
    }

    int right_sum = -1000;
    sum = 0;
    for (int j = mid + 1; j <= high; j++) {
        sum += arr[j];
        if (sum > right_sum) {
            right_sum = sum;
            max_right = j;
        }
    }
    cross_sum = left_sum + right_sum;
}

void findMaxSubarray(int arr[], int low, int high, int &final_low, int &final_high, int &final_sum) {
    if (low == high) {
        final_low = low;
        final_high = high;
        final_sum = arr[low];
        return;
    }

    int mid = (low + high) / 2;

    int left_low, left_high, left_sum;
    int right_low, right_high, right_sum;
    int cross_low, cross_high, cross_sum;

    findMaxSubarray(arr, low, mid, left_low, left_high, left_sum);
    findMaxSubarray(arr, mid + 1, high, right_low, right_high, right_sum);
    findMaxCrossSubarray(arr, low, mid, high, cross_low, cross_high, cross_sum);

    if (left_sum >= right_sum && left_sum >= cross_sum) {
        final_low = left_low;
        final_high = left_high;
        final_sum = left_sum;
    } else if (right_sum >= left_sum && right_sum >= cross_sum) {
        final_low = right_low;
        final_high = right_high;
        final_sum = right_sum;
    } else {
        final_low = cross_low;
        final_high = cross_high;
        final_sum = cross_sum;
    }
}

int main() {
    int n;
    cout << "Enter the array size: ";
    cin >> n;

    int arr[n]; 
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int low, high, sum;
    findMaxSubarray(arr, 0, n - 1, low, high, sum);

    cout << "Low: " << low << " High: " << high << " MaxSum: " << sum << endl;

    return 0;
}
