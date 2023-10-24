#include <iostream>
#include <stack>
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
    vector<int>ans(size, -1);
    stack<int>st;
    
    for(int i = size - 1; i >= 0; i--){
        
        while(!st.empty() && arr[i] >= st.top()){
            st.pop();
        }
        
        if(i < size){
            if(st.empty() == false){
                ans[i] = st.top();
            }
        }
        st.push(arr[i]);
    }
    cout<<endl;
    for(int i = 0; i < ans.size(); i++){
        cout<<arr[i]<<" --> "<<ans[i]<<endl;
    }
    cout<<endl;
}