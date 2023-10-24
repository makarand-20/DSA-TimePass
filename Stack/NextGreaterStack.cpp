#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
    int size;
    cout<<"Enter array size : ";
    cin>>size;

    int arr[size];
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    stack<int>st;
    st.push(arr[0]);

    for(int i = 1; i < size; i++){
        while(st.empty() == false && st.top() < arr[i]){
            cout<<st.top()<<" --> "<<arr[i]<<endl;
            st.pop();
        }
        st.push(arr[i]);
    }

    while (st.empty() == false) {
        cout<<st.top()<<" --> "<<"-1"<<endl;
        st.pop();
    }
}