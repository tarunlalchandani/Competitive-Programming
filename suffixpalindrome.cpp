#include<bits/stdc++.h>
using namespace std;
int ans=0;
int CheckPalindrome(vector<char> &A){
	int anskey = 0,i,j,p,q;
	for(i=0,j=A.size()-1;i<A.size(),j>=0;){
		if(i==j){
			if(i==A.size()-1){
				anskey = 1;
			}
			else{
				anskey = 0;
			}
		}
		else if(A[i]!=A[j]){
			i++;
			p=0;
			q=0;
			j= A.size()-1;
		}
		else if(A[i]==A[j]){
			if(p==0)
			p=i;
			else{
				if(i==p+1){
					p++;
				}
			}
			i++;
			j--;
		}
	}
	return anskey;
}
void FindString(vector<char> A,long long int n, long long int m,vector<char> &Charlist){
	cout<<"n:"<<n<<endl;
	if(n==0){
		ans = (CheckPalindrome(A)%m+ans%m)%m;
		cout<<"n=0 condition ans: "<<ans;
	}
	else{
		for(int i=0;i<Charlist.size();i++){
			A[n-1] = Charlist[i];
		}
		FindString(A,n-1,m,Charlist);
	}
}
int main(){
	long long int n,s,m;
	cin>>n>>s>>m;
	cout<<"n:"<<n<<"s:"<<s<<"m:"<<m<<endl;
	vector<char> Charlist(s);
	for(int i=0;i<s;i++){
		Charlist[i] = i+97;
	}
	cout<<"charlist"<<endl;
	for(int i=0;i<s;i++){
		cout<<Charlist[i]<<" ";
	}
	cout<<endl;
	vector<char> A(n);
	FindString(A,n,m,Charlist);
	cout<<ans;
	ans = ans%m;
	cout<<ans;
	return 0;
}
