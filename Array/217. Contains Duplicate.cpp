/*
Description:
    Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

Example 1:
    Input: nums = [1,2,3,1]
    Output: true
*/

#include <stdio.h>
#include <string.h>
#include <vector>
#include <map>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::map<int,int> freqCounter;
        bool ans = false;
        
        //populate map with number of occurences
        for(auto i : nums){
            freqCounter[i]++;
        }
        //iterate the map for occurences > 1
        for(auto i : freqCounter){
            if(i.second > 1){
                ans = true;
            }
        }
        return ans;
    }
};