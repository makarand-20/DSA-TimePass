#include <iostream>
#include <vector>
#include <map>
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

    int ans = 0;
    map<int,int>map;

    for(int i = 0; i < size; i++){
        ++map[arr[i]];
    }

    for(auto i : map){
        if(i.second > 1){
            cout<<i.first<<endl;
            break;
        }
    }
}