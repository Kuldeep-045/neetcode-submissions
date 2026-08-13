class Solution {
    bool isValid(map<char,int>&freq_s,map<char,int>&freq_t){
        for(auto it:freq_t){
            if(it.second>freq_s[it.first])return false;
        }
        return true;
    }
public:
    string minWindow(string s, string t) {
        // vector<int>freq_t(26),freq_s(26);
        map<char,int>freq_t,freq_s;
        for(char ch:t)freq_t[ch]++;
        int j=0;
        int temp=0;
        int ans=INT_MAX;
        int i=0;
        pair<int,int>p;
        for(char ch:s){
            freq_s[ch]++;
            temp++;
            i++;
            while(isValid(freq_s,freq_t)){
                if(ans>temp){
                    ans=min(ans,temp);
                    p.first=j;
                    p.second=i;
                }
                temp--;
                freq_s[s[j]]--;
                j++;
            }
        }
        string res="";
        while(p.first<p.second){
            res+=s[p.first];
            p.first++;
        }
        return res;
    }
};
