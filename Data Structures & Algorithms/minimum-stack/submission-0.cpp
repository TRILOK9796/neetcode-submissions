class MinStack {
private:
     stack<int> st;
     stack<int> getmin;
public:
    MinStack() {
       
    }
    
    void push(int val) {
        st.push(val);

        if(getmin.empty()||val<=getmin.top()){
            getmin.push(val);
        }
    }
    
    void pop() {
        if (st.top() == getmin.top()) {
    getmin.pop();
}
st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return getmin.top();
    }
};
