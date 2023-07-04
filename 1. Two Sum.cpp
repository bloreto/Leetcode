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