#include <bits/stdc++.h>
#include <string>

using namespace std;


int F;
int S;
int G;
int U;
int D;

int currentcounting = 0;

int maxi = 0;

int qsize = 0;

bool solved = false;

int wentto[1000001];


int usedamount = 0;






void bfs(int startc){
    
    queue<pair<int, int>> q;
    q.push(make_pair(startc, 0));
    

    while(!q.empty()){
        
        int floor = q.front().first;
        int elevm =  q.front().second;
        q.pop();
        if(floor == G){
            solved = true;
            cout << elevm;
            break;
        }

        // if(floor < G && wentto[floor] != true){
        //     q.push(make_pair(floor + U, elevm + 1));
        //     wentto[floor] = true;

        // }
        // else if(floor > G && wentto[floor] != true){
        //     q.push(make_pair(floor - D, elevm + 1));
        //     wentto[floor] = true;
        // }
        // else if(floor == G){
        //     solved = true;
        //     cout << elevm;
        //     break;

        // }
        // else{
        //     cout << "use the stairs";
        //     solved = true;
        //     break;
        // }

        
            
        
    }

    
}



int main(){
    cin >> F >> S >> G >> U >> D;
    bfs(S);
    
}