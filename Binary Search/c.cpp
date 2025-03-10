#include <iostream>
#include <vector>
using namespace std;

const int MAXN = 100005;
int parent[MAXN], depth[MAXN];
vector<int> tree[MAXN];

void reset(int n) {
    for (int i = 1; i <= n; i++) {
        tree[i].clear();
        parent[i] = -1;
        depth[i] = 0;
    }
}

void dfs(int node, int par) {
    parent[node] = par;
    for (int child : tree[node]) {
        if (child != par) {
            depth[child] = depth[node] + 1;
            dfs(child, node);
        }
    }
}

int findLCA(int u, int v) {
    if (depth[u] < depth[v]) {
        swap(u, v);
    }

    while (depth[u] > depth[v]) {
        u = parent[u];
    }

    while (u != v) {
        u = parent[u];
        v = parent[v];
    }

    return u;
}

int findMiddleNode(int u, int v) {
    int lca = findLCA(u, v);
    int distance = depth[u] + depth[v] - 2 * depth[lca];  

    int halfDistance = distance / 2;

    while (halfDistance > 0) {
        u = parent[u];
        halfDistance--;
    }

    return u;  
}

int main() {
    int t;  cin >> t;

    while (t--) {
        int n;  cin >> n;

        reset(n);

        for (int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
            tree[u].push_back(v);
            tree[v].push_back(u);
        }

        depth[1] = 0;
        dfs(1, -1);

        int q;  cin >> q;

        while (q--) {
            int a, b;
            cin >> a >> b;
            int middleNode = findMiddleNode(a, b);
            cout << middleNode << endl;
        }
    }

    return 0;
}
