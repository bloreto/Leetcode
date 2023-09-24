/*
Description:
    Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
    The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
    You must write an algorithm that runs in O(n) time and without using the division operation.

Example 1:
    Input: nums = [1,2,3,4]
    Output: [24,12,8,6]
*/

#include <stdio.h>
#include <string.h>
#include <vector>
#include <map>




// Brute Force Method
// Time Complexity : O(n^2), Where n is the size of the array.

class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        std::vector<int> product(nums.size(),1);

        //left product
        for(int i = 0; i < nums.size(); i++){
        
            for(int k = i-1; k != -1; k--){
                product[i] *= nums[k];
            }

        }

        //right product
        for(int i = nums.size()-1; i >= 0; i--){

            for(int k = i+1; k != nums.size(); k++){
                product[i] *= nums[k];
            }

        }

        //combine
        return product;
    }
};