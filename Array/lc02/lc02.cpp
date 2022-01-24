/*
* @description: 给定两个大小分别为 m 和 n 的正序（从小到大）数组 nums1 和 nums2。
请你找出并返回这两个正序数组的 中位数 .算法的时间复杂度应该为 O(log (m+n)) 。
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/median-of-two-sorted-arrays
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
* @author: sbw
* @date: 2022-01-24 22:16:12
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        int num[nums1.size() + nums2.size()];
        int head1 = 0, head2 = 0, head3 = 0;
        while (head1 < nums1.size() && head2 < nums2.size())
            num[head3++] = nums1[head1] <= nums2[head2] ? nums1[head1++] : nums2[head2++];
        while (head1 < nums1.size())
            num[head3++] = nums1[head1++];
        while (head2 < nums2.size())
            num[head3++] = nums2[head2++];
        if(((nums1.size() + nums2.size()) & 1) == 0)
        {
            double res = (double)((num[(nums1.size() + nums2.size()) / 2 - 1] + num[(nums1.size() + nums2.size()) / 2]) / 2.0);
            return  res;
        }
        return num[(nums1.size() + nums2.size()) / 2];

    }
};

int main()
{
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};
    Solution s;
    printf("%lf", s.findMedianSortedArrays(nums1, nums2));
    return 0;
}