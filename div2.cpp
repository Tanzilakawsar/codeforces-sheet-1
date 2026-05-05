#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); // Use NULL for compatibility

    int t;
    cin >> t;

    while (t--) {
        int n, m, q;
        cin >> n >> m >> q;

        vector<int> teacher_positions(m);
        for (int i = 0; i < m; ++i) {
            cin >> teacher_positions[i];
        }

        while (q--) {
            int david_position;
            cin >> david_position;

            // Find the minimum number of moves required
            int min_moves = 0;
            for (int i = 0; i < m; ++i) {
                int distance = abs(teacher_positions[i] - david_position);
                min_moves = max(min_moves, distance);
            }

            cout << min_moves << "\n";
        }
    }

    return 0;
}
