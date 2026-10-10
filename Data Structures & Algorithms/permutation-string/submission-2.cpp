class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       vector<int> v(26,0);
       if(s1.size()>s2.size()){
        return false;
       }
       for(char c : s1){
        v[c-'a']++;
       }
       int wsize=s1.size();

        for(int i=0;i<=s2.size()-wsize;i++){
            vector<int> v1(26,0);
            for(int j=i;j<i+wsize;j++){
                v1[s2[j]-'a']++;
            }
            if(v1==v){
                return true;
            }

        }
return false;
    }
};
