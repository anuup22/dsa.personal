#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter size of the Array: ";
    cin>>size;
    
    //taking array in input
    int arr[size];
    for(int i=0; i<size; i++){
        cout<<"Enter the "<<i+1<<" element: ";
        cin>>arr[i];
    }
    //sorting the array via insertion method
    for(int i=1; i<size; i++){
        int j,temp=arr[i];
        for(j=i-1; j>=0 && arr[j]>temp; j--){
            arr[j+1]=arr[j];
        }
        arr[j+1]=temp;
    }
    //printing the array
    cout<<"Sorted array is: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}