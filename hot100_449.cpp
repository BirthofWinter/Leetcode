#include<bits/stdc++.h>
using namespace std;


bool equal(vector<int> mpa,vector<int> mpb){
    for(int i=0;i<=25;i++){
        if(mpa[i]!=mpb[i]){
            return false;
        }
    }
    return true;
}

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int count=0;
        vector<vector<int>> totalmp;
        for(auto s:strs){
            vector<int> mp(26,0);
            for(auto c:s){
                int ascllofc=c;
                int index=ascllofc-'a';
                mp[ascllofc]++;
            }
            totalmp.push_back(mp);
        }

        
    }
};