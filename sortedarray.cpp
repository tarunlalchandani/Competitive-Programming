#include<bits/stdc++.h>
using namespace std;
bool Issorted(int *arr, int n){
	if(n==1){	
		return 1;
	}
	return (*(arr+n-1)<*(arr+n-2))?0:Issorted(arr,n-1);
}
int main(){
	int n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter elements"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	bool sorted = Issorted(arr,n);
	cout<<boolalpha<<sorted<<endl;
}
