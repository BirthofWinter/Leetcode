#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        vector<int> ans;
        int n=0;
        while(n<nums.size()){
            int nownum=nums[n];
            int findnum=target-nownum;
            if(mp.count(findnum)){
                ans.push_back(n);
                ans.push_back(mp[findnum]);
            }
            mp[nownum]=n;
            n++;
        }
        cout<<"["<<ans[0]<<","<<ans[1]<<"]"<<endl;
        return ans;
    }
};