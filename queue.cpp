#include <C:\INCLUDE\stdc++.h>


using namespace std;
queue<int> q;
int amount = 0;

string temp = "";
int temp2 = 0;


int main(){
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    cin >> amount;

    for(int i = 0; i < amount; i++){
        temp2 = 0;
        cin >> temp;
            if(temp == "push"){
                cin >> temp2;   
                q.push(temp2);

            }
            else if(temp == "pop"){
                if(!q.empty()){
                    cout << q.front() << "\n";
                    q.pop();
                }
                else{
                    cout << -1 << "\n";
                }
                

            }
            else if(temp == "size"){
                cout << q.size() << "\n";
            }
            else if(temp == "empty"){
                if(q.empty()){
                    cout << 1 << "\n";
                }
                else{
                    cout << 0 << "\n";
                }
            }
            else if(temp == "front"){
                if(q.empty()){
                    cout << -1 << "\n";
                }
                else{
                    cout << q.front() << "\n";
                }
            }
            else if(temp == "back"){
                if(q.empty()){
                    cout << -1 << "\n";
                }
                else{
                    cout << q.back() << "\n";
                }
            }
            
    }
}