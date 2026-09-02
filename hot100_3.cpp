#include<iostream>
#include<vector>
#include<map>
#include<string>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> count;
        int left=0;
        int right=0;
        int len=0;
        int n=s.length();
        while(right<n){
            if(count.find(s[right])==count.end()||count[s[right]]==0){
                count[s[right]]++;
                len=max(len,right-left+1);
                right++;
            }
            else{
                while(left<right&&count[s[right]]>0){
                    count[s[left]]--;
                    left++;
                }
            }
        }
        return len;
    }
}

;
