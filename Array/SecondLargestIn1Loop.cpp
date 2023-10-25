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
        if(maxi < arr[i]){
            sec_max = maxi;
            maxi = arr[i];
        }
    }
    cout<<sec_max<<endl;
}