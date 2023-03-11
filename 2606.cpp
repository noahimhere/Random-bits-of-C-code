#include <bits/stdc++.h>
#include <string>

using namespace std;

int n;
int m;
int temp;
bool infected[101];
bool connected[101][101];
int currentcounting = 0;
int temp1;
int maxi = 0;

int qsize = 0;







void bfs(int startc){
    queue<int> q;
    q.push(1);
    infected[startc] = true;
    

    while(!q.empty()){
        
        int comp = q.front();

        q.pop();
        for(int i = 0; i > maxi; i++){
            if(infected[connected[comp][i]] != true){
                q.push({connected[comp][i]});
                infected[connected[comp][i]] = true;   
                currentcounting++;
            }
            
        }
            
        
    }
    cout << currentcounting;

    
}



int main(){
    cin >> n;
    cin >> m;
    int i;
    for(i = 0; i < m; i++){
        cin >> temp;
        cin >> temp1;
        if(temp > maxi){
            maxi = temp;
        }
        if(temp1 > maxi){
            maxi = temp1;
        }
        connected[temp][temp1] = true;
        connected[temp1][temp] = true;
        
    }
    bfs(1);
    
}