//遍历一遍
//有点难想
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left = 0,right = nums.size()-1;
        int i = 0;
        while(i<=right)
        {
            if(nums[i]==0)
            {
                swap(nums[i],nums[left]);
                ++left;
                ++i;
            }
            else if(nums[i]==1)
            {
                ++i;
            }
            else //nums[i]==2
            {
                swap(nums[i],nums[right]);
                --right;
            }
        }
    }
};
