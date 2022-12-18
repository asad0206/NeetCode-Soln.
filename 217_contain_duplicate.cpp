//https://leetcode.com/problems/contains-duplicate/
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (auto x: nums){
            auto r = equal_range(nums.begin(), nums.end(), x);
            if((r.second - r.first) > 1){
                return true;
            }
        }
        return false;
    }
};