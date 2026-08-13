class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int minPrice=1e3;
        for(int val:prices){
            ans=max(ans,val-minPrice);
            minPrice=min(minPrice,val);
        }
        return ans;
    }
};
