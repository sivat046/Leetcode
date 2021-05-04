/*
Question: You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels.

Letters are case sensitive, so "a" is considered a different type of stone from "A".
Example 1:
Input: jewels = "aA", stones = "aAAbbbb"
Output: 3

Example 2:
Input: jewels = "z", stones = "ZZ"
Output: 0

Constraints:
1 <= jewels.length, stones.length <= 50
jewels and stones consist of only English letters.
All the characters of jewels are unique.*/


//Solution:1 0(n+m) using set
class Solution {
 public:
    int numJewelsInStones(string jew, string s) 
    {
        int cnt=0;
        unordered_set <int> st;
        for(int i=0;i<jew.size();i++) 
            st.insert(jew[i]);        
        for(int i=0;i<s.size();i++)
            if(st.find(s[i]) != st.end()) cnt++;
            return cnt;
    }
  }

//Solution:2 0(n^2)
class Solution {
 public:
        int numJewelsInStones(string jew, string s) 
        {
        int cnt=0;
        for(int i=0;i<jew.size();i++)
            for(int j=0;j<s.size();j++)
            {
                if(jew[i] ==s[j]) cnt++;
            }
        
        return cnt;
    }
  }

