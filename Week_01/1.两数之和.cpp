/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:

   
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int> key;
       int p = 0;
       vector<int> result;
       for(int i = 0; i < nums.size(); i++)
       {
           p = target - nums[i];
           if(key.find(p) != key.end())
           {
               result.push_back(key[p]);
               result.push_back(i);
               break;
           }
           key[nums[i]] = i;
       }
       return result;
    }

   



    vector<int> first(vector<int>& nums, int target){
        int flag = 0;
        vector<int> result(2);
        for(int i = 0; i < nums.size() && flag == 0; i++)
        {
            for(int j = i + 1; j < nums.size(); j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    result[0] = i;
                    result[1] = j;
                    flag = 1;
                    break;
                }
            }
        }
        return result;
    }
};
// @lc code=end

