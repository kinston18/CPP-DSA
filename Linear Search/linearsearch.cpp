#include<bits/stdc++.h>

using namespace std;

int main() {

    int size;
    cout<<"Enter the Size of Array: "<<endl;
    cin>>size;

    int* arr = new int[size];
    cout<<"Enter the Array: "<<endl;
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }

    int item;
    cout<<"Enter the Element to Search: "<<endl;
    cin>>item;

    int index = -1;

    for(int i=0;i<size;i++) {
        if(item == arr[i]) {
            index = i;
            break;
        }
    }

    if(index == -1) {
        cout<<"Element not available"<<endl;
    } else {
        cout<<"Element is in "<<index<<"th index."<<endl;
    }

    return 0;

}