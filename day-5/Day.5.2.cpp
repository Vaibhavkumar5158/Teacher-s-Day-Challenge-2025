class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {};

        // Step 1: Sort intervals by start time
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> merged;
        merged.push_back(intervals[0]);

        for (int i = 1; i < intervals.size(); i++) {
            vector<int>& last = merged.back();
            vector<int>& current = intervals[i];

            if (current[0] <= last[1]) {
                // Overlap → merge intervals
                last[1] = max(last[1], current[1]);
            } else {
                // No overlap → add new interval
                merged.push_back(current);
            }
        }

        return merged;
    }
};
