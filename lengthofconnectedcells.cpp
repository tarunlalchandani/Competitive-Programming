#include <bits/stdc++.h>
using namespace std;
int getvalue(vector< vector<int> >& matrix,int newi, int newj,int maxrow, int maxcolumn){
    if(newi<maxrow and newj<maxcolumn and newi>=0 and newj>=0){
        return matrix[newi][newj];
    }
    else {
        return 0;
    }
}
//Complete the connectedCell function below.
void findMaxBlock(vector< vector<int> > &matrix, int r, int c,int &maxrow,int& maxcolumn, int& size, vector< vector<bool> >&visited, int& maxsize ){
    if(r>=maxrow || c>=maxcolumn){
        return;
    }
    visited[r][c] = 1;
    size++;
    //cout<<"size: "<<size<<endl;
    if(size>maxsize){
      	maxsize = size;
        //cout<<"size: "<<size<<"maxsize: "<<maxsize<<endl;
    }
    vector< pair<int,int> > dir(8);
    dir[0] = make_pair(1,0);
    dir[1] = make_pair(1,-1);
    dir[2] = make_pair(0,-1);
    dir[3] = make_pair(-1,-1);
    dir[4] = make_pair(-1,0);
    dir[5] = make_pair(1,1);
    dir[6] = make_pair(0,1);
    dir[7] = make_pair(-1,1);
    int newi, newj;
    for(int i=0;i<8;i++){
        newi = r + dir[i].first;
        newj = c + dir[i].second;
        //cout<<"newi: "<<newi<<"newj: "<<newj<<endl;
        //cout<<"debug"<<matrix[0][1]<<endl;
        int val  = getvalue(matrix, newi, newj,maxrow, maxcolumn);
        //cout<<"val: "<<val<<endl;
        if( val>0 and !visited[newi][newj]){
            findMaxBlock(matrix,newi, newj,maxrow,maxcolumn,size,visited,maxsize);
        }
    }
    return;
}
int connectedCell(vector<vector<int>> matrix) {
    int maxrow = matrix.size();
    //cout<<"maxrow :"<<maxrow<<endl;
    int maxcolumn = matrix[0].size();
    //cout<<"maxcolumn:"<<maxcolumn<<endl;
    vector< vector<bool> > visited(maxrow,vector<bool> (maxcolumn,false));
    int size = 0;
    int maxsize = 0;
    for(int i=0;i<maxrow;i++){
        for(int j=0;j<maxcolumn;j++){
            if(matrix[i][j]==1){
                findMaxBlock(matrix, i, j, maxrow, maxcolumn, size, visited, maxsize);
                size =0;
            }
        }
    }
    //cout<<"maxsize:"<<maxsize<<endl;
    return maxsize;

}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> matrix(n);
    for (int i = 0; i < n; i++) {
        matrix[i].resize(m);

        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = connectedCell(matrix);

    fout << result << "\n";

    fout.close();

    return 0;
}

