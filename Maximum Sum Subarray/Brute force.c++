#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the array size: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the array elements: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"The array elements are: ";
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    int start,end;

    int current_sum=-100000;
    for (int i=0;i<size;i++){
        int sum =0;
        for(int j=i;j<size;j++){
            sum+=arr[j];
            if(sum>current_sum){
                current_sum=sum;
                start=i;
                end=j;
            }
        }
    }
cout<<"The maximum sum of a subarray: "<<current_sum<<" with starting index: "<<start<<" and ending index: "<<end;



    return 0;
}