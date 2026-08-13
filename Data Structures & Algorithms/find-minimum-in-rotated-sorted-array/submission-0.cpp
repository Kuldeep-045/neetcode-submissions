class Solution {
public:
    int findMin(vector<int> &nums) {
        int i=0;
        int j=nums.size()-1;
        int ans=0;
        while(i<j){
            int mid= (i+j)/2;
            if(nums[i]<=nums[j])return nums[i];
            if(nums[mid]>nums[j]){
                i=mid+1;
            }
            else{
                j=mid;
            }
        }
        return nums[i];
        
    }
};
