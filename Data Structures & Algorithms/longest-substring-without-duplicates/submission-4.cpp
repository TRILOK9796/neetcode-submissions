class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int right=0;
        int mxcount=0;
        unordered_set<char> st;
        while(right<s.size()){

             while (st.contains(s[right])) {
                st.erase(s[left]);
                left++;
            }
             st.insert(s[right]);
            mxcount = max(mxcount, right - left + 1);
            right++;
        }
        return mxcount;
      
    }
};
