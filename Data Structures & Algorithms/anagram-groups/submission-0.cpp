class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string,vector<int>> mp;

        for(int i=0;i<strs.size();i++){
            string temp=strs[i];
            sort(temp.begin(),temp.end());
            mp[temp].push_back(i);
        }

        for(auto x : mp){
            vector<string> s;
            for(int y:x.second){
                s.push_back(strs[y]);
            }
            res.push_back(s);
        }
        
        return res;     
    }
};
