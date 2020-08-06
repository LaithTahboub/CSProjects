// https://codeforces.com/contest/893/problem/C

// In this problem, you are given an undirected graph of people and their friends, as well as how much gold each person wants to spread a rumor. When a person spreads the rumor, they tell all their friends, and their friends tell their friends (for free), and so on. Your task is to tell the least amount of gold required so that everyone knows the rumor.


#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <queue>
#include <set>
#include <map>
 
using namespace std;
 
bool vis[100001];
vector<int> graph[100001];
 
int main() {
    int n, m;
    cin >> n >> m;
    multimap<int, int> gold;
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        gold.insert({x, i});
    }
    for (int i = 1; i <= m; ++i) {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    long long int count = 0;
    // BFS
    for (auto x : gold) {
        queue<int> q;
        if (!vis[x.second]) {
            q.push(x.second);
            count += (long long) x.first;
            //cout << count << ' ';
        }
        while (!q.empty()) {
            int curr = q.front();
            q.pop();
            if (!vis[curr]) {
                vis[curr] = true;
                for (int i = 0; i < graph[curr].size(); ++i) {
                    if (!vis[graph[curr][i]])
                        q.push(graph[curr][i]);
                }
            }
        }
    }
    cout << count;
 
    return 0;
}
