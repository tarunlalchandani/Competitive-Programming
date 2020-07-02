#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int x = 1000000000 + 9;
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        cout<<"n: "<<n<<endl;
        int sum = 0;
        for(int i=n;i>=1;i--){
            int temp = (((n%x)*(n%x))%x - (((n-1)%x)*((n-1)%x))%x +x)%x;
            cout<<"temp: "<<temp<<endl;
            sum += temp;
            cout<<"sum: "<<sum<<endl;
        }
        cout<<sum%x<<endl;
    }
}
