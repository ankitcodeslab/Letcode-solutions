class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n=nums1.size();
        int minimum=nums1[0];
        bool alleven = true;

        for(int i=0;i<n;i++){
            minimum=min(minimum,nums1[i]);

            if(nums1[i]%2 != 0){
                alleven=false;
            }
        }
        if(minimum % 2 != 0){
            return true;
        }
        return alleven;
    }
};