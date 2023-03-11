#include <bits/stdc++.h>
#include <string>

using namespace std;

int n;
int m;
string temp;
bool visited[101][101];
int graph[101][101];
int steps[101][101];
int currentcounting = 0;
int temp2 = 1;
int temp3;
int qsize = 0;



struct COORD{
    int steps;
    int x;
    int y;
};




void bfs(int startx, int starty){
    queue<COORD> q;
    q.push({1,startx,starty});
    visited[startx][starty] = true;
    currentcounting = q.back().steps;
    

    while(!q.empty()){
        
        int x = q.front().x;
        int y = q.front().y;
        int currentcounting = q.front().steps;

        q.pop();
        if(y+1<m && visited[x][y+1]!=true && graph[x][y + 1] == 1 ){
            
            q.push({currentcounting + 1, x, y+1});
            visited[x][y+1] = true;    
        }
        if(x+1<n && visited[x+1][y]!=true && graph[x+1][y] == 1 ){
            
            q.push({currentcounting + 1, x+1, y});
            visited[x+1][y] = true;    

        }
        if(y > 0 && visited[x][y-1]!=true && graph[x][y-1]==1) {
                
                q.push({currentcounting + 1, x, y-1});
                visited[x][y-1] = true;
                
        }
        if(x > 0 && visited[x-1][y]!=true && graph[x-1][y]==1){
            
                q.push({currentcounting + 1, x-1, y});
                visited[x-1][y] = true;
        }
        if(q.front().x == n-1 && q.front().y == m-1){
        cout << q.front().steps;
        }
    }

    
}



int main(){
    cin >> n;
    cin >> m;
    int i,j;
    for(i = 0; i < n; i++){
        cin >> temp;
        for(j=0;j<m;j++){
            graph[i][j]=temp[j]-'0';
        }
    }
    bfs(0, 0);
    
}