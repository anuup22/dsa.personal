#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    cout<<"Printing the array\n";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nDone"<<endl;
}

int getMax(int num[],int n){
    int max = num[0];

    for(int i=0; i<n; i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    return max;
}

int getMin(int num[],int n){
    int min = num[0];

    for(int i=0; i<n; i++){
        if(num[i]<min){
            min=num[i];
        }
    }
    return min;
}

int main(){
    int size;
    cout<<"Enter the size of the Array: ";
    cin>>size;

    int num[size];
    for(int i=0; i<size; i++){
        cout<<"Enter the "<<i<<" element of the Array: ";
        cin>>num[i];
    }
    printArray(num,size);

    int sum=0;
    for(int i=0; i<size; i++){
        sum=sum+num[i];   
    }
    cout<<"Sum is: "<<sum<<endl;
    cout<<"Minimum value is: "<<getMin(num,size)<<endl;
    cout<<"Maximum value is: "<<getMax(num,size)<<endl;
    
    return 0;
}