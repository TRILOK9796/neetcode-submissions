class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> st;
        
        for(int i=0;i<tokens.size();i++){
           

             if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/"){
                if (st.size() < 2) return 0;
                 long long f=st.top();
            st.pop();
            long long s=st.top();
            st.pop();
            if(tokens[i]=="+"){
                st.push(s+f);
            }else if(tokens[i]=="-"){
                st.push(s-f);
            }else if(tokens[i]=="*"){
                st.push(s*f);
            }else{
                st.push(s/f);
            }
            }else{
                st.push(stoll(tokens[i]));
            }
        }
     if (st.empty()) return 0;
        return st.top();
    }
};
