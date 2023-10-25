#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of an array : ";
    cin>>n;
    
    int arr[n];
    
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    for(int i = 0; i < n; i++){
        int temp = -1;
        for(int j = i+1; j < n; j++){
            if(arr[j] > arr[i]){
                temp = arr[j];
                break;
            }
        }
        cout<<arr[i]<<" --> "<<temp<<endl;
    }
    
}