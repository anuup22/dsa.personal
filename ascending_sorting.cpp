#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter size of the Array: ";
    cin>>size;

    int arr[size];
    for(int i=0; i<size; i++){
        cout<<"Enter the "<<i+1<<" element: ";
        cin>>arr[i];
    }

    //i is starting from 1 index & goes till size-1 index
    for(int i=0; i<size-1; i++){

        //j is starting from 2 index & goes till size index
        for(int j=i+1; j<size; j++){

            //it'll sort the array
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }

    cout<<"Sorted array is: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}