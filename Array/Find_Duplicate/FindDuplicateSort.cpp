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

    sort(arr, arr+size);

    for(int i = 0; i < size; i++){
        if(arr[i] == arr[i+1]){
            cout<<arr[i]<<endl;
            break;
        }
    }
    
}