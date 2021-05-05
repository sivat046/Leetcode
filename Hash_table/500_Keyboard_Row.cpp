// 500. Keyboard Row

// Given an array of strings words, return the words that can be typed using letters of the alphabet on only one row of American keyboard like the image below.

// In the American keyboard:

// the first row consists of the characters "qwertyuiop",
// the second row consists of the characters "asdfghjkl", and
// the third row consists of the characters "zxcvbnm".

 

// Example 1:
// Input: words = ["Hello","Alaska","Dad","Peace"]
// Output: ["Alaska","Dad"]

// Example 2:
// Input: words = ["omk"]
// Output: []

// Example 3:
// Input: words = ["adsdf","sfd"]
// Output: ["adsdf","sfd"]
 

// Constraints:
// 1 <= words.length <= 20
// 1 <= words[i].length <= 100
// words[i] consists of English letters (both lowercase and uppercase). 

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
    string r1="qwertyuiop",r2="asdfghjkl",r3="zxcvbnm";
    vector<int> h(100,0);
    vector<string> res;
    for(int i=0;i<r1.size();i++) h[r1[i]-'a'] =1;
    for(int i=0;i<r2.size();i++) h[r2[i]-'a'] =2;
    for(int i=0;i<r3.size();i++) h[r3[i] -'a'] =3;
    for(string s: words)
    {
        int k=1;
        string ks=s;
       transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int i=1;i<s.size();i++)
        { 
            if(h[s[i-1]-'a'] != h[s[i]-'a'])
            {
                k=0;
               
            }
        }
        if(k) res.push_back(ks);
    }
        
        return res;
    }
};
