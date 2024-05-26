#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int countNonOverlappingIntervals(vector<int>& starting, vector<int>& ending) {
    int n = starting.size();
    vector<int> dp(n, 0); // dp[i] will store the maximum number of intervals that can be selected ending at interval i

    // Sort intervals based on ending points
    vector<pair<int, int>> intervals;
    for (int i = 0; i < n; ++i) {
        intervals.push_back({ending[i], i});
    }
    sort(intervals.begin(), intervals.end());

    for (int i = 0; i < n; ++i) {
        int curr_end = intervals[i].first;
        int idx = intervals[i].second;

        // Binary search to find the latest non-overlapping interval
        int left = 0, right = i - 1, latest_non_overlap = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (starting[idx] > intervals[mid].first) {
                latest_non_overlap = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        if (latest_non_overlap != -1) {
            dp[i] = max(dp[i], dp[latest_non_overlap] + 1);
        }
        if (i > 0) {
            dp[i] = max(dp[i], dp[i - 1]);
        }
    }

    return dp[n - 1];
}

int main() {
    vector<int> starting = {1, 2, 4, 6};
    vector<int> ending = {3, 5, 7, 8};

    int ways = countNonOverlappingIntervals(starting, ending);
    cout << "Number of ways to select three non-overlapping intervals: " << ways << endl;

    return 0;
}
