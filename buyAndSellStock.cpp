#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min, max;
        int min_index;
        min = prices[0];
        for(int i=0; i<prices.size(); i++){
            if(prices[i] < min){
                min = prices[i];
                min_index = i;
            }

        }
        max = 0;
        for(int j=min_index; j<prices.size(); j++){
            if(prices[j] > max){
                max = prices[j];
            }
        }
        return max-min;
    }
};