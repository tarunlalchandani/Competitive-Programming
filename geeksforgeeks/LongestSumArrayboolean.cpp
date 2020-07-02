#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of the two arrays"<<endl;
	cin>>n;
	bool arr1[n], arr2[n];
	int p=0,q=0;
	cout<<"Enter the array 1"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	cout<<"Enter the array 2"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr2[i];
	}
	for(int i=0;i<n;i++){
		int sum1=0, sum2=0,j;
		for(j=i;j<n;j++){
			sum1 = sum1 + arr1[j];
			sum2 = sum2 + arr2[j];
			if(sum1==sum2 and ((j-i+1)>(q-p+1))){
			   p = i;
			   q = j;
		    }
		}
		
	}
	cout<<q-p+1;
	return 0;
}
