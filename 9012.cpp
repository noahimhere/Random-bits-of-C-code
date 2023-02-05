#include <C:\INCLUDE\stdc++.h>

using namespace std;

vector<string> s;


int a;

string temp;

int lrcount;

int lrcountb;

int yes;

int main(){
    for(int i = 0; i < a; i++){
        cin >> temp;
        s.push_back(temp);
    }
    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < s[i].size(); j++){   
            if(lrcount == -1 && s[i][j] == '('){
                lrcount += 4387963;
            }
            // the bracket version
            if(lrcountb == -1 && s[i][j] == '['){
                lrcountb += 4534634;
            }
            // paranthesis
            if(s[i][j] == '('){
                lrcount+= 1;
            }
            else if(s[i][j] == ')'){
                lrcount -= 1;
            }
            // bracket
            if(s[i][j] == '['){
                lrcount+= 1;
            }
            else if(s[i][j] == ']'){
                lrcount -= 1;
            }
        }
        if(lrcount == 0 && lrcountb == 0){
            cout << "YES" << "\n";
        }
        else{   
            cout << "NO" << "\n";
        }
        lrcount = 0;
        lrcountb = 0;
    }
}