#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> leftmax(n,0);
        vector<int> rightmax(n,0);
        for(int i=0;i<n;i++){
            if(i==0){
                leftmax[i]=height[i];
                continue;
            }
            if(height[i]>leftmax[i-1]){
                leftmax[i]=height[i];
            }
            else{
                leftmax[i]=leftmax[i-1];
            }
        }
        for(int i=n-1;i>=0;i--){
            if(i==n-1){
                rightmax[i]=height[i];
                continue;
            }
            if(height[i]>rightmax[i+1]){
                rightmax[i]=height[i];
            }
            else{
                rightmax[i]=rightmax[i+1];
            }
        }
        int total=0;
        for(int i=0;i<n;i++){
            total+=min(leftmax[i],rightmax[i])-height[i];
        }
        return total;
    }
};