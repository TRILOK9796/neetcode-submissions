class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> st;
        
        for(int i=0;i<tokens.size();i++){
            int f,s;
             
            if(tokens[i]=="+"){
                 if (st.size() < 2) return 0; 
                 f=st.top();st.pop();
                 s=st.top();st.pop();
                st.push(s+f);
            }else if(tokens[i]=="-"){
                 if (st.size() < 2) return 0; 
                 f=st.top();st.pop();
                 s=st.top();st.pop();
                st.push(s-f);
            }else if(tokens[i]=="*"){
                 f=st.top();st.pop();
                 s=st.top();st.pop();
                st.push(s*f);
            }else if(tokens[i]=="/"){
                 if (st.size() < 2) return 0; 
                 f=st.top();st.pop();
                 s=st.top();st.pop();
                st.push(s/f);
            }else{
                st.push(stoll(tokens[i]));
            }
        }
     if (st.empty()) return 0;
        return st.top();
    }
};
