#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        int prevnum;
        for(int i=0;i < nums.size(); i++){
            if(nums[i] != prevnum){
                nums[k] = nums[i];
                k++;
            }
        prevnum = nums[i];
        }
        return k;
    }
};