#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
#define all(x) (x).begin(), (x).end()
using namespace std;
const long long INF = 1LL << 60;
using Graph = vector<vector<int>>;
typedef long long ll;

void rec(int N, vector<string>& grid, int x, int y, int size) {
    if (N == 1) {
        grid[y][x] = '#';
        grid[y][x + 1] = '#';
        grid[y][x + 2] = '#';
        grid[y + 1][x] = '#';
        grid[y + 1][x + 1] = '.';
        grid[y + 1][x + 2] = '#';
        grid[y + 2][x] = '#';
        grid[y + 2][x + 1] = '#';
        grid[y + 2][x + 2] = '#';
        return;
    }
    
    int newSize = size / 3;
    rec(N - 1, grid, x, y, newSize);
    rec(N - 1, grid, x + newSize, y, newSize);
    rec(N - 1, grid, x + 2 * newSize, y, newSize);
    rec(N - 1, grid, x, y + newSize, newSize);
    rec(N - 1, grid, x + 2 * newSize, y + newSize, newSize);
    rec(N - 1, grid, x, y + 2 * newSize, newSize);
    rec(N - 1, grid, x + newSize, y + 2 * newSize, newSize);
    rec(N - 1, grid, x + 2 * newSize, y + 2 * newSize, newSize);
}

int main() {
    int N = 3;  // 例として2を使用
    int size = pow(3, N - 1) * 3;
    vector<string> grid(size, string(size, '.'));
    rec(N, grid, 0, 0, size);
    fore(row, grid) {
        cout << row << endl;
    }
    return 0;
}