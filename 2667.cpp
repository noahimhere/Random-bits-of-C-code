#include <bits/stdc++.h>

using namespace std;

int n, m, temp1, temp2, countdown, currentcount;
char** graph;
bool hasfound = false;
vector<int> groups;

int tempx, tempy;


struct COORD{
    int groupsize = 0;
    int x;
    int y;
};



void bfs(){
    queue<COORD> q;
    while(true){
    hasfound = false;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(graph[i][j] == '1'){
                tempx = i;
                tempy = j;
                hasfound = true;
                // cout << i << " " << j;
                break;
                
            }
        }
        if(hasfound == true){
            break;
        }
    }
    if(hasfound == false){
        cout << groups.size() << "\n";
        while(!groups.empty()) {
            cout << groups.back() << "\n";
            groups.pop_back();
        }
        return;
    }
    q.push({1, tempx, tempy});
    currentcount = q.back().groupsize;
    graph[tempx][tempy] = 0;
    int cnt = 0;


    for(int i = 0 ; i < m ; i++) {
        for(int j = 0 ; j < m ; j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
    cout << "---------" << endl;

    while(!q.empty()){
        int x = q.front().x;
        int y = q.front().y;
        int currentcounting = q.front().groupsize;

        q.pop();
        if(y+1<m && graph[x][y + 1] == '1' ){
            
            q.push({currentcounting + 1, x, y+1});
            cnt++;
            graph[x][y+1] = '0';    
        }
        if(x+1<n && graph[x+1][y] == '1' ){
            
            q.push({currentcounting + 1, x+1, y});
            cnt++;
            graph[x+1][y] = '0';    

        }
        if(y >= 0 && graph[x][y-1]== '1') {
                
                q.push({currentcounting + 1, x, y-1});
                cnt++;
                graph[x][y-1] = '0';
                
        }
        if(x >= 0 && graph[x-1][y]=='1'){
            
                q.push({currentcounting + 1, x-1, y});
                cnt++;
                graph[x-1][y] = '0';
        }
        

    }
    groups.push_back(cnt);
    hasfound = false;


    }



}





int main(){
    cin >> n;
    m = n;

    graph = new char*[m];

    for(int i = 0; i < m; i++){
        graph[i] = new char[m];
        cin >> graph[i];
    }

    for(int i = 0 ; i < m ; i++) {
        for(int j = 0 ; j < m ; j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
    cout << "---------" << endl;
    bfs();
}