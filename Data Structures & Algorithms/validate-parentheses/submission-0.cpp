class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char ch:s){
            if(ch=='{')st.push('}');
            else if(ch=='(')st.push(')');
            else if(ch=='[')st.push(']');
            else{
                if(!st.size() or st.top()!=ch)return false;
                st.pop();
            }
        }
        return (int)st.size()==0;
    }
};
