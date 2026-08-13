class Solution {
private: 
    bool isValid(vector<int>res,int k){
        int mxElement=0;
        int sum=0;
        for(int val:res){
            mxElement=max(mxElement,val);
            sum+=val;
        }
        return (sum-mxElement)<=k;
    }
public:
    int characterReplacement(string s, int k) {
        vector<int>res(26);
        int j=0;
        int temp=0;
        int ans=0;
        for(char ch:s){
            res[ch-'A']++;
            temp++;
            while(!isValid(res,k)){
                res[s[j]-'A']--;
                j++;
                temp--;
            }
            ans=max(ans,temp);
        }
        return ans;
    }
};
