#include <bits/stdc++.h>

using namespace std;

vector<int> v[10]; // adj matrix
int level[10]; // level of the graph
bool visited[10]; // node visited or not

void bfs(int s){
    queue<int> q;
    q.push(s);
    level[s] = 0; // setting the current root as the level 0
    visited[s] = true;

    while (!q.empty()){
        int p = q.front();
        q.pop();
        for (int i = 0; i < v[p].size(); i++){
            if (visited[v[p][i]] == false){
                level[v[p][i]] = level[p]+1;
                q.push(v[p][i]);
                visited[v[p][i]]=true;
            }
        }
    }
}

int main(){
    

    return 0;
}