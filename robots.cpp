#include<bits/stdc++.h>
using namespace std;
class Robot{
	public:
		int value;
		int position;
};
int main(){
	int t;
	cin>>t;
	vector<string> ans;
	while(t--){
		string s;
		vector<Robot> v;
		cin>>s;
		for(int i=0;i<s.size();i++){
			if(s[i]>=48 and s[i]<=57){
				Robot r;
				r.value = s[i]-48;
				r.position = i;
				v.push_back(r);
			}
		}
		bool flag = false;
		int n = v.size();
		for(int i=0;i<n-1;i++){
			if((v[i].value+v[i+1].value)>=(v[i+1].position-v[i].position)){
				flag = true;
				break;
			}
		}
		if(flag==true) ans.push_back("unsafe");
		else if(flag==false) ans.push_back("safe");
	}
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<endl;
	}
	return 0;	
}
