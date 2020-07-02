#include<bits/stdc++.h>
using namespace std;
    bool isValid(string s) {
        stack<char> S;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' or s[i]=='{' or s[i]==']'){
                cout<<"Hi"<<endl;
                S.push(s[i]);
                continue;
            }
            char x;
            if(S.empty()){
            	cout<<"Hello"<<endl;
                return false;
            }
            switch(s[i]){
                case ']':
                	cout<<1<<endl;
                    x = S.top();
                    S.pop();
                    if(x!='['){
                        return false;
                        break;
                    }
                    break;
                case '}':
                	cout<<"2"<<endl;
                    x = S.top();
                    S.pop();
                    if(x!='{'){
                        return false;
                        break;
                    }
                    break;

                
            case ')':
            cout<<"3"<<endl;
             x = S.top();
             cout<<x<<endl;
             
                S.pop();
                if(x!='('){
                    return false;
                    break;
                }
            break;
        }
        }
        return (S.empty());
  }
int main(){
	string S;
	cout<<"Enter the string"<<endl;
	cin>>S;
	cout<<isValid(S)<<endl;
	return 0;
}
