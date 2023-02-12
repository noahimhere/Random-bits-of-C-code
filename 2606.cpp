#include <C:\INCLUDE\stdc++.h>

using namespace std;

int visited[100] = {0,};
vector<int> graph[100];

int n;
int m;
int temp1;
int temp2;
int counting = 0;


void bfs(int start){
    queue<int> q;
    q.push(start);
    visited[start] = 1;


    while(!q.empty()){
        int x = q.front();
        q.pop();
        counting++;
        for(int i = 1; i <= n; i++){
            //int y = graph[x][i];
            if(graph[x][i] == 1 && visited[i] == 0){
                visited[i] = 1;
                q.push(i);
            }
            
        }
    }
    
    
}

int main(){
    cin >> n;
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> temp1;
        cin >> temp2;
        graph[temp1].push_back(temp2);
        graph[temp2].push_back(temp1);
        
    }
    bfs(1);
    cout << counting-1;
    
}   