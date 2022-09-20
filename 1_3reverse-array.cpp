#include<iostream>
using namespace std;

void reverse(int arr[], int size){
    int start=0;
    int end=size-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
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
    int first[6]={1,2,3,4,5,6};
    int second[5]={1,2,3,4,5};

    reverse(first,6);
    reverse(second,5);
    
    cout<<"first array after swaping:\n";
    printArray(first,6);

    cout<<"second array after swaping:\n";
    printArray(second,5);

    return 0;
}

// Q1: Swap alternate elements
// Q2: Find unique
// Q3: Find duplicate
// Q4: Find array intersection
// Q5: Find pair sum
// Q6: Find triplet sum
// Q7: Find short 0s and 1s

