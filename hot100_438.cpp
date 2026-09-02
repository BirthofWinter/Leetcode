#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        map<char, int> count;
        int slength = s.length();
        int plength = p.length();
        vector<int> ans;
        for (int i = 0; i < plength; i++)
        {
            count[p[i]]++; // 标记字串的内容
        }
        int left = 0;
        int right = 0;
        int mark = 0;
        for (; right < plength; right++)
        {
            if (count.find(s[right]) == count.end() || count[s[right]] == 0) // 不是字串
            {
                mark = 1;
                if(count.find(s[right]) != count.end()){
                    count[s[right]]--;
                }
            }
            else
            {
                count[s[right]]--;
            }
        }
        if (mark == 0)
        {
            ans.push_back(left);
        }
        right--;
        while (right < slength - 1)
        {
            right++;
            if (count.find(s[left]) != count.end())
            {
                count[s[left]]++;
            }
            left++;
            if (count.find(s[right]) != count.end())
            {
                count[s[right]]--;
            }

            mark = 0;
            for (int i = 0; i < p.size(); i++)
            {
                if(count[p[i]]!=0){
                    mark=1;
                    break;
                }
            }

            if (mark == 0)
            {
                ans.push_back(left);
            }
        }
        return ans;
    }
};

int main()
{
    Solution sol;
    auto ans = sol.findAnagrams("dbabdeedbc", "e");
    while (!ans.empty())
    {
        cout << ans.back() << " ";
        ans.pop_back();
    }
}