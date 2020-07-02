#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	bool arr1[n], arr2[n];
	cout<<"Enter array 1"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	cout<<"Enter array 2"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr2[i];
	}
	int aux_array[2*n+1];
	for(int i=0;i<(2*n+1);i++){
		aux_array[i] = -1;
	}
	int current_diff,maxlen = 0,len,diff_index;
	int presum1 = 0, presum2 = 0;
	for(int i=0;i<n;i++){
		presum1 += arr1[i];
		presum2 += arr2[i];
		current_diff = presum1 - presum2;
		diff_index = current_diff+n;
		if(current_diff==0){
			maxlen = i+1;
		}
		else if(aux_array[diff_index] == -1){
			aux_array[diff_index] = i;
		}
		else{
			len = i-aux_array[diff_index];
			if(len>maxlen){
				maxlen = len;
			}
		}
	}
	cout<<"The maxlen is "<<maxlen<<endl;
}
