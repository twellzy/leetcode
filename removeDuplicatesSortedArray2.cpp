#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        int currentnum = 0;
        int count = 0;
        for(int i=0;i < nums.size(); i++){
            if(nums[i] != currentnum){
                currentnum = nums[i];
                count = 1;
            }
            else{
                count++;
            }

            if(count <= 2){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};