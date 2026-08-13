class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        for(int i=0;i<nums.size();i++){
            int j=i+1,k=nums.size()-1;
            if(j>1 and nums[i]==nums[i-1])continue;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum>0)k--;
                else if(sum<0)j++;
                else{
                    res.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<k and nums[j-1]==nums[j])j++;
                    while(j<k and nums[k]==nums[k+1])k--;
                }
            }
        }
        return res;
    }
};
