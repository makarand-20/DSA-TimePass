#include <iostream>
#include <vector>
using namespace std;

int main(){
    int size;
    cout<<"Enter array size : ";
    cin>>size;

    int arr[size];
    cout<<"Enter array elements : ";
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    int k;
    cout<<"Enter sum as K : ";
    cin>>k;

    //actual code...

    int left = 0;
    int right = 0;

    int maxLength = 0;
    long long sum = arr[0];


    while(right < size){

        while(left <= right && sum > k){
            sum -= arr[left];
            left++;
        }

        if(sum == k){
            maxLength = max(maxLength, right - left + 1);
        }

        right++;
        if(right < size)
            sum += arr[right];
    }

    cout<<"Max Length of K is : "<<maxLength<<endl;

}