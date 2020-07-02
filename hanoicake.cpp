#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	vector<int> v;
	//cout<<"t :"<<t<<endl;
	while(t--){
		int size=0;
		int maxsize=0;
		int n;
		cin>>n;
		//cout<<"n:"<<n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		//cout<<"array is"<<endl;
		//for(int i=0;i<n;i++){
			//cout<<arr[i]<<" ";
		//}
		int j=0;
		while(j<n-1){
			for(int i=j;i<n-1;i++){
				if(arr[i]>=arr[i+1]){
					if(size==0){
						size = size+2;
					}
					else{
						size++;
					}
					j++;
				}
				else{
					j++;
					break;
				}
			}
			if(maxsize<size){
				maxsize = size;
				size=0;
			}
			//cout<<"maxsize: "<<maxsize<<"size: "<<size<<"j: "<<j<<endl;
		}
		v.push_back(maxsize);
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl<<endl<<endl;
	}
	return 0;
}
