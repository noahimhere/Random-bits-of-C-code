#include <C:\INCLUDE\stdc++.h>

using namespace std;

queue<int> q;

int n;

int temp;

int main(){
    cin >> n;
    for(int i = 1; i < n+1; i++){
        q.push(i);
    }

    while(q.size() != 1){
        q.pop();
        temp = q.front();
        q.pop();
        q.push(temp);
        
    }
    cout << q.front();
}