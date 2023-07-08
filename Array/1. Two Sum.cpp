/*
Description:
    Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
    You may assume that each input would have exactly one solution, and you may not use the same element twice.
    You can return the answer in any order.

Example 1:
    Input: nums = [2,7,11,15], target = 9
    Output: [0,1]
    Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
*/

#include <stdio.h>
#include <string.h>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::vector<int> answer;
        answer.assign(2,0);
        
        for(int i = 0;i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if(nums.at(i) + nums.at(j) == target && i!=j){
                    answer.at(0) = i;
                    answer.at(1) = j;
                    return answer;
                }
            }
        }
        return answer;
    }     
};

int main(){ return 0; }