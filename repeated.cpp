#include<bits/stdc++.h>
using namespace std;
vector<int> repeatedNumber(const vector<int> &B) {
	int n=B.size();
	cout<<"Array B:"<<endl;
	for(int i=0;i<n;i++){
		cout<<B[i]<<" ";
	}
	cout<<endl;
    
    cout<<"n: "<<n<<endl;
    vector<int> number(n);
    for(int i=0;i<n;i++){
        number[i] = i+1;
    }
    cout<<"Number array: "<<endl;
    for(int i=0;i<n;i++){
    	cout<<number[i]<<" ";
    }
	cout<<endl;
    int a;
    for(int i=0;i<n;i++){
        if(number[B[i]-1]!=-1){
            number[B[i]-1]=-1;
        }
        else{
          a = B[i];  
          break;
        }
    }
    long long int sum = 0;
    for(int i=1;i<=n;i++){
        sum = (i-B[i-1])+sum;
        cout<<sum<<endl;
        cout<<"Hare Krishna"<<endl;
    }
    cout<<"sum:"<<sum<<endl;
    int b = sum+a;
    vector<int> ans;
    ans.push_back(a);
    ans.push_back(b);
    return ans;
}
int main(){
	
	int n;
	cout<<"Enter n"<<endl;
	cin>>n;
	vector<int> v(n);
	cout<<"Enter elements"<<endl;
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	vector<int> ans = repeatedNumber(v);
	cout<<ans[0]<<" "<<ans[1]<<endl;
	return 0;
}
