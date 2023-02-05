#include <C:\INCLUDE\stdc++.h>

using namespace std;

queue<int> q;

int k;

int n;
int temp;


int main(){
    cin >> n;
    cin >> k;
    
    for(int i = 1; i < n + 1; i++){
        
        q.push(i);
    }
    cout << "<";
    while(q.size() != 0){
        for(int i = 1; i < k; i++){
            temp = q.front();
            q.pop();
            q.push(temp);
        }
        temp = q.front();
        if(q.size() == 1){
            cout << temp;
        }
        else{
            cout << temp << ", ";
        }
        
        q.pop();

    }
    cout << ">";

}