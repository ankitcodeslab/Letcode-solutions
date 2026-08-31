class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int minElem = min_element(nums.begin(), nums.end()) - nums.begin();
        int maxElem = max_element(nums.begin(), nums.end()) - nums.begin();

        int left = min(minElem, maxElem);
        int right = max(minElem, maxElem);

        return min({
            left + 1 + n - right,
            right + 1,
            n - left
        });
    }
};