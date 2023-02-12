#include <C:\INCLUDE\stdc++.h>

using namespace std;

int n;
int m;
int temp;
bool visited[101][101];
vector<int> graph[9];
int counting = 0;
int temp2 = 1;
int temp3;



void bfs(int startx, int starty){
    queue<pair<int, int>> q;
    q.push(make_pair(startx, starty));
    visited[startx][starty] = true;
    

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        if(0 <= x <= m){
            
        }
        
        for(int i = 0; i < graph[x].size(); i++){
            int y = graph[x][i];
            if(!visited[x][y]){
                if(graph[x][y] == 1){
                    if(graph[x][y + 1] == 1){
                        counting++;
                        q.push(make_pair(x, y));
                        visited[x][y] = true;
                    }
                    else if(graph[x + 1][y] == 1){
                        counting++;
                        q.push(make_pair(x, y));
                        visited[x][y] = true;
                    }
                    else if(y > 0){
                        if(graph[x][y - 1] == 1){
                            counting++;
                            q.push(make_pair(x, y));
                            visited[x][y] = true;
                        }
                    }
                    else if(x > 0){
                        if(graph[x - 1][y] == 1){
                            counting++;
                            q.push(make_pair(x, y));
                            visited[x][y] = true;
                        }
                    }
                    
                }
                
            }
        }
    }
}



int main(){
    cin >> n;
    cin >> m;
    for(int i = 0; i < n; i++){
        cin >> temp;
        for(int j = 0; j < int(log10(temp) + 1); j++){
            temp3 = temp / temp2 % 10;
            temp2 * 10;
        }
        graph[i].push_back(temp3);
        temp2 = 1;
    }
    bfs(n, m);
    cout << counting;
}