#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        double total = 0;
        double n = nums.size();
        int i = 0;
        while(total < (n/2)){
            total = count(nums.begin(), nums.end(),nums[i]);
            i++;
        }
        return nums[i-1];

    }
};