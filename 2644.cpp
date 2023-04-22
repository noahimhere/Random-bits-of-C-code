#include <bits/stdc++.h>
#include <string>

using namespace std;

int n;
int m;
int temp1;
int temp2;
vector<pair<int, int>> relation;

int starting;

bool beento[101];

int currentcounting = 0;
int maxi = 0;

int fos = 5;

int qsize = 0;
int p;
int c;
int e;

int chonsu;









void bfs(int startc){
    queue<pair<int ,int>> q;
    q.push(relation[starting]);
    chonsu++;
    

    while(!q.empty()){
        pair<int, int> comp = q.front();
        q.pop();

        
        for(int i = 1; i < relation.size(); i++){
            if(relation[i].first == p || relation[i].second == p){
                cout << chonsu;
                return;
            }
            else if(fos == 0){
                if(relation[i].first == comp.first && i != starting){
                    q.push(relation[i]);
                    beento[i] == true;
                    chonsu++;
                }
                if(relation[i].first == comp.second && i != starting){
                    q.push(relation[i]);
                    beento[i] == true;
                    chonsu++;
                }
            }
            else{
                if(relation[i].second == comp.first && i != starting){
                    q.push(relation[i]);
                    beento[i] == true;
                    chonsu++;
                }
                if(relation[i].second == comp.second && i != starting){
                    q.push(relation[i]);
                    beento[i] == true;
                    chonsu++;
                }
            }

        }

        
            
        
    }
    cout << currentcounting;

    
}




int main(){
    cin >> n;
    cin >> p >> c;
    cin >> e;
    for(int i = 0; i < e; i++){
        cin >> temp1 >> temp2;
        if(temp1 == c){
            starting = i;
            fos = 0;
        }
        if(temp2 == c){
            starting = i;
            fos = 1;
        }
        // cout << starting << "\n";
        relation.push_back(make_pair(temp1, temp2));
    }

    // cout << starting << " " << fos;

    if(fos == 5){
        cout << -1;
    }
    bfs(1);


    
    
}