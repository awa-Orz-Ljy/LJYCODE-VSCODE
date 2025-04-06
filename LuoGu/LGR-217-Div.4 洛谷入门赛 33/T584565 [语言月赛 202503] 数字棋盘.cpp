#include <iostream>
#include <vector>
using namespace std;

bool solve(const vector<vector<int>>& board, int i, int j, int y) {
    int n = board.size(),m = board[0].size(); 
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};
    for(int k = 0; k < 4; ++k){
        int I = i + dx[k],J = j + dy[k];
        if(I >= 0 &&I < n&&J >= 0&&J < m){
            if(board[I][J] == y)return true; 
    	}
	}
    return false;
}

int main() {
    int n,m,x,y;cin>>n>>m;
    vector<vector<int>> board(n, vector<int>(m));
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < m;j ++){
            cin>>board[i][j];
        }
    }
    int count = 0;cin>>x>>y;
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < m;j ++){
            if(board[i][j] == x&&solve(board, i, j, y))count++;
        }
    }
    cout<<count<<endl;
    return 0;
}