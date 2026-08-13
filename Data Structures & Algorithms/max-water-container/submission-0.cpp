class Solution {
public:
    int maxArea(vector<int>& heights) {

        //     |               |
        //     |               |       |
        //     |       |       |       |
        //     |       |   |   |       |
        //     |       |   |   |   |   |
        //     |   |   |   |   |   |   |
        // |   |   |   |   |   |   |   |

        // 0   1   2   3   4   5   6   7
        //     i               j    

        // ans= (7-0)*min(1,7); i=0,j=7 ans 7, i++
        // ans= (7-1)*min(6,7); i=1,j=7 ans 36, j--


        int ans=0;
        int i=0,j=heights.size()-1;
        while(i<j){
            int tempAns= (j-i)*min(heights[i],heights[j]);
            ans=max(ans,tempAns);
            if(heights[i]<heights[j])i++;
            else j--;
        }
        return ans;


    }
};
