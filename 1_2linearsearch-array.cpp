#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int example[]={2,4,6,4,9,11,45,67,72,41,67,45,42,39};
    int num;
    cout<<"Enter key to search: ";
    cin>>num;

    //storing boolean value in boolean variable "found"
    bool found=search(example,14,num);

    //if key is found then variable "found"=1
    cout<<found<<endl;

    if(found){
        cout<<"Key is present\n";
    }
    else{
        cout<<"Key is absent\n";
    }

    return 0;
}