#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
#include <climits>

using namespace std;

struct State {
    int x, y, moves, isVertical; // Position (x, y), number of moves, and last move direction
};

bool isValid(int x, int y, int H, int W, const vector<string>& grid, vector<vector<vector<bool>>>& visited, int isVertical) {
    return x >= 0 && x < H && y >= 0 && y < W &&
           grid[x][y] != '#' && !visited[x][y][isVertical];
}

int findMinimumMoves(const vector<string>& grid, int H, int W, pair<int, int> start, pair<int, int> goal) {
    queue<State> q;
    vector<vector<vector<bool>>> visited(H, vector<vector<bool>>(W, vector<bool>(2, false)));
    int directions[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}}; // up, down, left, right

    // Start BFS from the starting point, both vertical and horizontal possible
    q.push({start.first, start.second, 0, 0}); // Vertical move starts
    q.push({start.first, start.second, 0, 1}); // Horizontal move starts
    visited[start.first][start.second][0] = true;
    visited[start.first][start.second][1] = true;

    while (!q.empty()) {
        auto [x, y, moves, isVertical] = q.front();
        q.pop();

        if (x == goal.first && y == goal.second) {
            return moves; // Found the goal
        }

        // Explore next moves based on the current direction
        for (int i = 0; i < 4; i++) {
            int nx = x + directions[i][0];
            int ny = y + directions[i][1];

            // Check alternation condition
            if ((isVertical && directions[i][0] == 0) || (!isVertical && directions[i][1] == 0)) {
                if (isValid(nx, ny, H, W, grid, visited, 1 - isVertical)) {
                    visited[nx][ny][1 - isVertical] = true;
                    q.push({nx, ny, moves + 1, 1 - isVertical});
                }
            }
        }
    }

    return -1; // Goal is not reachable
}

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> grid(H);
    pair<int, int> start, goal;

    for (int i = 0; i < H; i++) {
        cin >> grid[i];
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == 'S') {
                start = {i, j};
            } else if (grid[i][j] == 'G') {
                goal = {i, j};
            }
        }
    }

    int result = findMinimumMoves(grid, H, W, start, goal);
    cout << result <<endl; 

    return 0;
}
