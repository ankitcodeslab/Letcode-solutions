class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;

        if(n==0)
        return 0;
        ans.push_back(nums[0]);

        for(int i=0;i<n-1;i++){
            if(nums[i] != nums[i+1]){
                ans.push_back(nums[i+1]);
            }
        }
        for(int i=0;i<ans.size();i++){
            nums[i]=ans[i];
        }
        return ans.size();
    }
};