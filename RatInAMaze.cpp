#include<bits/stdc++.h>
using namespace std;
bool Safe(int n, int X, int Y){
	if((X<=n-1 and X>=0) and (Y<=n-1 and Y>=0)){
		return true;
	}
	else{
		return false;
	}
}
bool SolutionUtil(int n,vector< vector<int> >&Maze, int X, int Y,int& count){
	if(X==n-1 and Y==n-1){
		count++;
		return true;
	}
	if(Safe(n,X,Y)==true){
		if(SolutionUtil(n,Maze,X+1,Y,count)==true){
			return true;
		}
		if(SolutionUtil(n,Maze,X,Y+1,count)==true){
			return true;
		}
		if(SolutionUtil(n,Maze,X-1,Y,count)==true){
			return true;
		}
		if(SolutionUtil(n,Maze,X,Y-1,count)==true){
			return true;
		}
		return false;
	}
	return false;
}
void Solution(int n,vector< vector<int> >&Maze, int i,int j, int& count){
	if(SolutionUtil(n,Maze,0,0,count)==false){
		cout<<"Path Does not exist";
	}
	return;
}
int main(){
	int n;
	cin>>n;
	vector< vector<int> > Maze(n,vector<int>(n));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>Maze[i][j];
		}
	}
	int count = 0;
	Solution(n,Maze,0,0,count);
	cout<<"No. of paths: "<<count<<endl;
	return 0;
}
