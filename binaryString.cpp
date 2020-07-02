#include<bits/stdc++.h>
using namespace std;
vector<int> flip(string A) {
    int max=0;
    int n = A.size();
    max = count(A.begin(),A.end(),'1');
    cout<<max<<endl;
    vector<int> v;
    return v;
}
int main(){
	string st;
	cout<<"Enter the binary string"<<endl;
	cin>>st;
	vector<int> z = flip(st);
	return 0;
}
