#include <bits/stdc++.h>

using namespace std;


vector<int> relation[101];

int n;

int p;
int c;
int m;


bool visited[101];

int bfs(int parent, int child) {
    queue<pair<int, int>> q;
    visited[parent] = true;
    q.push({parent, 0});

    while (!q.empty()) {
        int qfir = q.front().first;
        int qscnd = q.front().second;
        q.pop();

        if (qfir == child) {
            cout << qscnd;
            return 0;
        }

        for (int i = 0; i < relation[qfir].size(); i++) {
            int next = relation[qfir][i];
            if (!visited[next]) {
                visited[next] = true;
                q.push({next, qscnd+1});
            }
        }
    }

    cout << -1;
    return -1;
}

int main() {
    cin >> n >> p >> c >> m;

    for (int i = 0; i < m; i++) {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        relation[temp1].push_back(temp2);
        relation[temp2].push_back(temp1);
    }

    bfs(p,c);

    return 0;
}


