#include<iostream>
using namespace std;

void swapAlt(int arr[],int size){
    for(int i=0; i<size; i+=2){
        if(i+1<size){
        swap(arr[i],arr[i+1]);
        }
    }
}

void printArray(int arr[],int size){
    cout<<"Printing the array\n";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nDone"<<endl;
}

int main(){
    int even[]={1,2,3,4,5,6,7,8};
    int odd[]={1,2,3,4,5,6,7};

    swapAlt(even,8);
    printArray(even,8);

    return 0;
}