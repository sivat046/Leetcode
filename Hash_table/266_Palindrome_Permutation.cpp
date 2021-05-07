// 266. Palindrome Permutation

// Given a string s, return true if a permutation of the string could form a palindrome.

// Example 1:
// Input: s = "code"
// Output: false

// Example 2:
// Input: s = "aab"
// Output: true

// Example 3:
// Input: s = "carerac"
// Output: true

// Constraints:

//     1 <= s.length <= 5000
//     s consists of only lowercase English letters.
      
class Solution {
public:
    bool canPermutePalindrome(string s) {
        unordered_set<char> st;
        for(char c:s) 
        {
            if(st.find(c) != st.end()) st.erase(c);
            else st.insert(c);
        }
        
        return st.size() <=1 ;
    }
    
};

