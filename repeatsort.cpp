vector<int> Solution::repeatedNumber(const vector<int> &B) {
    int n=B.size();
    vector<int> number(n);
    for(int i=0;i<n;i++){
        number[i] = i+1;
    }
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
    }
    int b = sum+a;
    vector<int> ans;
    ans.push_back(a);
    ans.push_back(b);
    return ans;
}
