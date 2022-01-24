/*
* @description: 力扣第一题hashmap解法
* @author: sbw
* @date: 2022-01-24 21:05:37
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++)
        {
            /* code */
            auto iter = map.find(nums[i]);
            if(iter != map.end())
            {
                //如果查到了,返回当前下标和之前的下标
                return {iter->second, i};
            }
            map.insert(pair<int, int>(target - nums[i], i));
        }
        return {};
    }
};

int main()
{
    vector<int> nums = {2, 7 ,15, 11};
    int target = 9;
    Solution s;
    vector<int> res =  s.twoSum(nums, target);
    vector<int>::iterator iter = res.begin();

    for (;iter != res.end(); iter++)
    {
        /* code */
        cout << (*iter) << " ";
    }
    return 0;
}