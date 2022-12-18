//https://leetcode.com/problems/two-sum/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int, int> m;
        for(int i=0; i<nums.size(); i++){
            int tar = target - nums[i];
            if(m.find(tar)!=m.end()){
                result.push_back(m[tar]);
                result.push_back(i);
                break;
            }
            else{
                m.insert({nums[i], i});
            }
        }
        return result;
    }
};