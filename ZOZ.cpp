#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	vector<int> brr;
	while(t--){
		int n,k;
		cin>>n;
		cin>>k;
		int arr[n];
		int sum=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			sum = sum+arr[i];
		}
		int d=0;
		for(int i=0;i<n;i++){
			arr[i] = (2*arr[i]-sum)+k;
			if(arr[i]>0){
				d++;
			}
		}
		brr.push_back(d);
	}
	for(int i=0;i<brr.size();i++){
		cout<<brr[i]<<endl;
	}
	return 0;
}
