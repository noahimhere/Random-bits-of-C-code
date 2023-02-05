#include <C:\INCLUDE\stdc++.h>

using namespace std;

int n = 0;
int m = 0;
int counting = 0;
int a = 0;
int b = 0;
int visited[300];
int path[300];
void dfs(int depth, int x){
    visited[x] = 1;
    path[depth] = x;
    if(depth == m) { //m is what has been selected

        for(int i=1;i<=m;i++){
            cout<<path[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    for(int i = 0; i <=  n; i++){
        if(visited[i] == 0){
            dfs(depth + 1, i);
            visited[i] = 0;
        }
    }

}

int main(){ 
    cin >> n;
    cin >> m;
    dfs(0, 0);

}