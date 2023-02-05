#include <C:\INCLUDE\stdc++.h>

using namespace std;

stack<int> s;

string functions[5] = {"push", "pop", "size", "empty", "top"};

int amount;

string temp;
int tempnum;


void act(int chosen){
    if(chosen == 0){
        cin >> tempnum;
        s.push(tempnum);
        
    }
    
    if(chosen == 1){
        if(s.size() != 0){
        s.pop();
        }
        else{
            cout << -1;
        }
    }
    if(chosen == 2){
        cout << s.size();
    }
    if(chosen == 3){
        if(s.empty()){
            cout << 1;
        }
        else{
            cout << 0;
        }
    }
    if(chosen == 4){
        if(s.size() == 0){
            cout << -1;
        }
        else{
            cout << s.top();
        }
    }
}

int main(){
    cin >> amount;

    for(int i = 0; i < amount; i++){
        cin >> temp;
        for(int j = 0; j < 5; j++){
            if(temp == functions[j]){
                act(j);
            }
        }
    }
}