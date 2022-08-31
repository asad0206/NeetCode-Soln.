//https://leetcode.com/problems/two-sum/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(int i=0; i<nums.size(); i++){
            int tar = target - nums[i];
            auto it = find(nums.begin(), nums.end(), tar);
            if(it!=nums.end()){
                int k = distance(nums.begin(), it);
                result.push_back(i);
                result.push_back(k);
                break;
            }
        }
        return result;
    }
};