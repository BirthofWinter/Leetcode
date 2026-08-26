#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size=nums.size();
        int plc_0=size-1;
        int fast=0;
        int slow=0;
        int count=0;
        while(fast<=size-1){
            if(nums[fast]!=0){
                nums[slow]=nums[fast];
                slow++;
                
            }
            else{
                count++;
            }
            fast++;
        }
        for(int i=0;i<count;i++){
            nums[size-1-i]=0;
        }
        return;
    }
    
};