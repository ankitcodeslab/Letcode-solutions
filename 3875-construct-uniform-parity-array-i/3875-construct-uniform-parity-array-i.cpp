class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int odd=0;
        int even =0;
        for(int &num:nums1){
            if(num%2==0){
                even++;
            }
            odd++;
        }
        if(even==0){
            return true;
        }
        if(odd==0){
            return true;
        }
        return 2;
    }
};