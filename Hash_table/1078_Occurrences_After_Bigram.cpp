// 1078. Occurrences After Bigram
// Easy

// Given words first and second, consider occurrences in some text of the form "first second third", where second comes immediately after first, and third comes immediately after second.

// For each such occurrence, add "third" to the answer, and return the answer.

 

// Example 1:

// Input: text = "alice is a good girl she is a good student", first = "a", second = "good"
// Output: ["girl","student"]

// Example 2:
// Input: text = "we will we will rock you", first = "we", second = "will"
// Output: ["we","rock"]

 

// Note:

//     1 <= text.length <= 1000
//     text consists of space separated words, where each word consists of lowercase English letters.
//     1 <= first.length, second.length <= 10
//     first and second consist of lowercase English letters.

class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        stringstream k(text);
        vector<string> res,init;
        string word ="";
        while(k>>word) init.push_back(word);
        for(int i=0;i<init.size()-2;i++)
        {
            if(init[i] == first && init[i+1] == second)
            {
                res.push_back(init[i+2]);
            }
        }
        
        return res;
            
    }
};
