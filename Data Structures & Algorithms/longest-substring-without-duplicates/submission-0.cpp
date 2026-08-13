class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int j=0;
        int ans=0;
        for(char ch:s){
            while(st.count(ch)){
                st.erase(s[j]);
                j++;
            }
            st.insert(ch);
            ans=max(ans,(int)st.size());
        }
        return ans;
    }
};
