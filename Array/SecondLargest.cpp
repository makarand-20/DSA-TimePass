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

    int maxi = 0;
    int sec_max = 0;

    for(int i = 0; i < size; i++){
        maxi = max(maxi, arr[i]);
    }

    for(int i = 0; i < size; i++){
        if(sec_max < arr[i] && arr[i] != maxi){
            sec_max = arr[i];
        }
    }

    cout<<"2nd max : "<<sec_max<<endl;
}