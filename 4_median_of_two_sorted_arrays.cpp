// https://leetcode.com/problems/median-of-two-sorted-arrays/

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> v;

        for (auto x : nums1)
            v.push_back(x);
        for (auto x : nums2)
            v.push_back(x);

        sort(v.begin(), v.end());
        int n = v.size();
        return n % 2 ? v[n / 2] : (v[n / 2 - 1] + v[n / 2]) / 2.0;
    }
};

// binary searhc
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int n = n1 + n2;

        if (n1 > n2)
            return findMedianSortedArrays(nums2, nums1);

        int partition = (n + 1) / 2;

        // Edge Case
        if (n1 == 0)
            return n2 % 2 ? nums2[n2 / 2] : (nums2[n2 / 2] + nums2[n2 / 2 - 1]) / 2.0;

        if (n2 == 0)
            return n1 % 2 ? nums1[n1 / 2] : (nums1[n1 / 2] + nums1[n1 / 2 - 1]) / 2.0;

        int left1 = 0;
        int right1 = n1;
        int cut1, cut2;
        int l1, r1, l2, r2;

        do
        {
            cut1 = (left1 + right1) / 2;
            cut2 = partition - cut1;

            // Calculation for l1
            l1 = cut1 == 0 ? INT_MIN : nums1[cut1 - 1];

            // Calculation for l2
            l2 = cut2 == 0 ? INT_MIN : nums2[cut2 - 1];

            // Calculation for r1
            r1 = cut1 >= n1 ? INT_MAX : nums1[cut1];

            // Calculation for r2
            r2 = cut2 >= n2 ? INT_MAX : nums2[cut2];

            if (l1 <= r2 && l2 <= r1)
                // return result
                return (n % 2) ? max(l1, l2) : (max(l1, l2) + min(r1, r2)) / 2.0;
            else

                if (l1 > r2)
                right1 = cut1 - 1;
            else
                left1 = cut1 + 1;

        } while (left1 <= right1);

        return 0.0;
    }
};