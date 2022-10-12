#include <iostream>
using namespace std;

// Fill the element in empty array
void fillarray(int a[],int n)
{            
	cout<<"Enter the elements in array :";
	for(int i=0;i<=n-1;i++){
		cin>>a[i];
	}
}
//display the user input elements of array
void displayarray(int a[],int n){
	for(int i=0;i<=n-1;i++){
		cout<<a[i]<<" ";
	}
}
//function to perform swapping operation
void swap(int &x, int&y){
	int t=x; x=y; y=t;
}
//function to sort elements by bubble sorting method
void bubblesort(int a[],int n){
	for(int p=0;p<n-2;p++){
    for(int c=0;c<=n-2-p;c++){
    	if(a[c]>a[c+1])
    	swap(a[c],a[c+1]);
	}
	}
}
//main function calling
int main(){
	int n;
	cout<<"How many randoms elements are you insert :";
	cin>>n;
	int a[n];
	fillarray(a,n);
	cout<<"array before sorting :";
	cout<<endl;
	displayarray(a,n);
	bubblesort(a,n);
	cout<<endl;
	cout<<"array after sorting :";
	displayarray(a,n);
	return 0;
}
