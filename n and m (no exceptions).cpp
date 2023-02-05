    #include <C:\INCLUDE\stdc++.h>

    using namespace std;

    int n = 0;
    int m = 0;
    int counting = 0;
    int a = 0;
    int b = 0;
    int path[300];
    vector<int> nums;
    int temp;
    int visited[300];

    void dfs(int depth, int x){
        path[depth] = nums[x];
        if(depth == m) { //m is what has been selected

            for(int i=1;i<=m;i++){
                cout<<path[i]<<" ";
            }
            cout<<"\n";
            return;
        }
        for(int i = 0; i <  n; i++){
                dfs(depth + 1, i);
                visited[i] = 0;
        }

    }

    int main(){ 
        cin >> n;
        cin >> m;
        for(int j = 0; j < n; j++){
            cin >> temp;
            nums.push_back(temp);
        }
        sort(nums.begin(), nums.end());
        dfs(0, -1);
    }