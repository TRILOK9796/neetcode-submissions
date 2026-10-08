class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left(nums.size());
        left[0]=1;
        vector<int> right(nums.size());
        right[0]=1;
        int x=1;
        for(int i=1;i<nums.size();i++){
            x=x*nums[i-1];
            left[i]=x;
        }
        reverse(nums.begin(),nums.end());
        x=1;
        for(int i=1;i<nums.size();i++){
            x=x*nums[i-1];
            right[i]=x;
        }
        reverse(right.begin(),right.end());
        for(int i=0;i<nums.size();i++){
            left[i]=left[i]*right[i];
        }
        return left;
    }
};
