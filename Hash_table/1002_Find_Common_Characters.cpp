// 1002. Find Common Characters

// Given an array A of strings made only from lowercase letters, return a list of all characters that show up in all strings within the list (including duplicates).  For example, if a character occurs 3 times in all strings but not 4 times, you need to include that character three times in the final answer.

// You may return the answer in any order.

 // Example 1:
// Input: ["bella","label","roller"]
// Output: ["e","l","l"]

// Example 2:
// Input: ["cool","lock","cook"]
// Output: ["c","o"]
 

// Note:
// 1 <= A.length <= 100
// 1 <= A[i].length <= 100
// A[i][j] is a lowercase letter

class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
      vector<int> h1(26,0), h2(26,0);
        vector<string> res;
        for(int i=0;i<A[0].size();i++)
        {
            h1[A[0][i] -'a']++;
        }
        for(string s:A)
        {
            for(int i=0;i<s.size();i++)
            {
                h2[s[i]-'a']++;
            }
            for(int i=0;i<26;i++)
            {
                h1[i]= min(h1[i],h2[i]);
                h2[i]=0;
            }
        }
        
        for(int i=0;i<26;i++)
        {
            if(h1[i]>0)
            {
                int ks= h1[i];
                while(ks--)
                {
                    char p = i+'a';
                    string st ;
                    st=p;
                    res.push_back(st);
                }
            }
        }
        
        return res;
    }
};
