#include <iostream>
using namespace std;

void addition(int n){
    int p,sum=0;
	for(int i=1; i<=n; i++){
	    cout<<"Enter the "<<i<<" "<<"number:";
	    cin>>p;
	    sum=sum+p;
	}
	cout<<"Sum is: "<<sum;
}

void multiplication(int m){
    int q,multi=1;
    for(int i=1; i<=m; i++){
	    cout<<"Enter the "<<i<<" "<<"number:";
	    cin>>q;
	    multi=multi*q;
    }
    cout<<"Multiplication is: "<<multi;
}

int main(){
    cout<<"What you want to do?"<<endl;
    cout<<"For addition press 1 OR For multiplication press 2 ->";
    
    int a,n,m;
    cin>>a;
    if(a==1){
        cout<<"Enter total number of elements to add:";
        cin>>n;
        addition(n);
    }
    else if(a==2){
        cout<<"Enter total number of elements to multiply:";
        cin>>m;
        multiplication(m);
    }
    else{
        cout<<"Invalid Input"<<endl;
    }
	
	return 0;
}
