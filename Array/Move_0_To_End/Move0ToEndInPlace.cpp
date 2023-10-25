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

    int j = -1;
    for(int i = 0; i < size; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }

    for(int i = j + 1; i < size; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
}