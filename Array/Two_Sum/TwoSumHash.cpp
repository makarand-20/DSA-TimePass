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

    int k;
    cout<<"Enter sum as K : ";
    cin>>k;

    //actual code...

    map<int,int>map;

    for(int i = 0; i < size; i++){
        int a = arr[i];
        int moreNeed = k - a;

        if(map.find(moreNeed) != map.end()){
            cout<<"("<<map[moreNeed]<<","<<i<<")"<<endl;
        }
        map[a] = i;
    }
}