class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();
        // lets find out pairs
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int first = nums[i];
                int second = nums[j];
                int sum = first + second;
                if (sum == target) {
                    return {i, j};
                }
            }
        }
        return{};
    }
};


// Two Sum


// agar empty arr return karna hai to  arr ki copy banane ki koi jarurat nahi
// hai
// 10 may ko sabse pehle kia
//  25 july 2025 teacher day challange ke liye 