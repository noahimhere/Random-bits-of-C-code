#include<stdio.h>
#include<vector>
#include<queue>

#define LEN 1100
using namespace std;
int matrix[LEN][LEN], N, M, V, visit[LEN];
vector<int> pathDfs, pathBfs;
queue<int> Q;

int dfs(int x) {
    pathDfs.push_back(x);
    visit[x] = 1;
    int i;
    for (i = 1; i <= N; i++) {
        if (visit[i] == 0 && matrix[x][i] == 1) {
            dfs(i);
        }
    }
    return 0;
}

int main() {
    int i, j, a, b;
    scanf("%d %d %d", &N, &M, &V);
    for (i = 0; i < M; i++) {
        scanf("%d %d", &a, &b);
        matrix[a][b] = 1;
        matrix[b][a] = 1;
    }
    dfs(V);
    for (i = 1; i <= N; i++) {
        visit[i] = 0;
    }
    Q.push(V);
    visit[V] = 1;

    while (!Q.empty()) {
        int front = Q.front();
        Q.pop();
        pathBfs.push_back(front);
        for (i = 1; i <= N; i++) {
            if (matrix[front][i] == 1 && visit[i] == 0) {
                Q.push(i);
                visit[i] = 1;
            }
        }
    }
    for (i = 0; i < pathDfs.size(); i++) {
        printf("%d ", pathDfs[i]);
    }
    printf("\n");
    for (i = 0; i < pathBfs.size(); i++) {
        printf("%d ", pathBfs[i]);
    }
    return 0;
}