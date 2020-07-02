#include<bits/stdc++.h>
using namespace std;
void printbitArray(vector<char> &A, int n){
	if(n==0){
		for(int i=0;i<A.size();i++){
			cout<<A[i];
		}
		cout<<endl;
	}
	else{
		A[n-1] = '0';
		printbitArray(A,n-1);
		A[n-1] = '1';
		printbitArray(A,n-1);
	}
}
int main(){
	int n;
	cout<<"Enter the no. of bits"<<endl;
	cin>>n;
	vector<char> A(n);
	printbitArray(A,n);
	return 0;
}
