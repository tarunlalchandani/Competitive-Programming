#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int temp;
	priority_queue<int> p;
	int k=0;
	for(int i=0;i<n and k!=n;i++){
		cin>>temp;
		//cout<<"k: "<<k<<endl;
		if(temp!=n-k){
			p.push(temp);
			//cout<<p.top()<<" "<<endl;
			cout<<endl;
		}	
		else if(temp==n-k){
			cout<<temp<<" ";
			k++;
			int a = p.size();
			for(int j=0;j<a;j++){
				//cout<<"p.top:"<<p.top()<<endl;
				if(p.top()==n-k){
					//cout<<n-k<<endl;
					cout<<p.top()<<" ";
					p.pop();
					//cout<<"p.top()"<<p.top()<<endl;
					//cout<<"j,k:"<<j<<k<<endl;
					k++;
				}
				else{
					break;
				}
			}
			cout<<endl;
		}
	}
	return 0;
}
