#include <C:\INCLUDE\stdc++.h>

using namespace std;

stack<int> s;

int a;
int temp;
int sums;
int sizing;


int main(){
    cin >> a;
    for(int i = 0; i < a;i++){
        cin >> temp;
        if(temp == 0){
            if(s.size() > 0){
                s.pop();
            }
            else{
                s.push(temp);
            }   
        }
        else{
            s.push(temp);
        }
    }
    sizing = s.size();
    for(int i = 0; i < sizing; i++){
        sums += s.top();
        s.pop();
    }
    cout << sums;
}