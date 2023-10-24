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
    int j = 0;
    vector<int>ans(size, 0);

    for(int i = 0; i < size; i++){
        if(arr[i] != 0){
            ans[j] = arr[i];
            j++;
        }
    }

    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}