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

    int slow = arr[0];
    int fast = arr[0];

    do
    {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);
    
    fast = arr[0];

    while(slow != fast){
        slow = arr[slow];
        fast = arr[fast];
    }

    cout<<slow<<endl;

}