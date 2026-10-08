class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
     map<int,int> mp;
     for(int i=0;i<nums.size();i++){
        mp[nums[i]]=i;
     }
     int prev;
     int count=1;
     int mxcount=1;
     int i=0;

     for(auto x : mp){
        if(i==0){
           
            i=1;
            prev=x.first;
             continue;
        }

        if(x.first==prev+1){
            count++;
        }else{
            mxcount=max(mxcount,count);
            count=1;
        }

         prev=x.first;
     }
     mxcount=max(mxcount,count);
     
    return mxcount;
    }
};
