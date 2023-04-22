#include <bits/stdc++.h>
#include <string>
#include <ctime>
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


int usedamount = 0;

bool visitcheck[1100000];

queue<pair<int, int>> q;




void bfs(int startc){
    
    


    
    q.push(make_pair(startc, 0));
    visitcheck[startc] = true;



    while(!q.empty()){
        
        int floor = q.front().first;
        int elevm =  q.front().second;
        q.pop();
        if(floor == G){
                solved = true;
                cout << elevm;
                break;
        }
        if(floor + U <= F && visitcheck[floor + U] == false){
            q.push(make_pair(floor + U, elevm + 1));  
            visitcheck[floor + U] = true;  

        }
        if(floor - D >= 1 && visitcheck[floor - D] == false){
            q.push(make_pair(floor - D, elevm + 1));
            visitcheck[floor - D] = true;  
        }

        
            
        
    }
    if(solved == false){
        cout << "use the stairs";
        return;
    }

    
}



int main(){
    int i;
    cin >> F >> S >> G >> U >> D;
    bfs(S);
    
}