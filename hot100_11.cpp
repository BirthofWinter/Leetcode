#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int size=height.size();
        int left=0;
        int right=size-1;
        int maxS=0;
        while(left<right){
            int h=min(height[left],height[right]);
            int nowS=h*(right-left);
            maxS=max(maxS,nowS);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxS;
    }
};