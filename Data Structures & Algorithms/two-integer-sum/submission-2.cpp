class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int,int> s;
      vector<int> v(2,-1);
      
      for(int i=0;i<nums.size();i++){
        if(s.count(target-nums[i])){
            v[0]=s[target-nums[i]];
            v[1]=i;
            return v;
        }
        s[nums[i]]=i;
      }  
      return v;
    }
};
