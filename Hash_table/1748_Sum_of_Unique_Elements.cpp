// Question: You are given an integer array nums. The unique elements of an array are the elements that appear exactly once in the array.

// Return the sum of all the unique elements of nums.

 

// Example 1:

// Input: nums = [1,2,3,2]
// Output: 4
// Explanation: The unique elements are [1,3], and the sum is 4.
// Example 2:

// Input: nums = [1,1,1,1,1]
// Output: 0
// Explanation: There are no unique elements, and the sum is 0.
// Example 3:

// Input: nums = [1,2,3,4,5]
// Output: 15
// Explanation: The unique elements are [1,2,3,4,5], and the sum is 15.
 

// Constraints:

// 1 <= nums.length <= 100
// 1 <= nums[i] <= 100

class Solution {
public:
    //Solution 1: 0(2n)
  
    int sumOfUnique(vector<int>& A) {
        // unordered_set<int> s;
        unordered_map<int,int> m;
        for(int i=0;i<A.size();i++)
        {
            m[A[i]]++;
        }
        int sum=0;
        for(auto p:m)
        {
            if(p.second == 1) sum+=p.first;
        }
        return sum;
    }
    
    Solution 2: 0(n)
      
        int sumOfUnique(vector<int>& A) {
        unordered_map<int,int> m;
        int sum=0;
        for(int i=0;i<A.size();i++)
        {
            int c =++m[A[i]];
            if(c==1) sum+=A[i];
            else if(c==2) sum-=A[i];
            
        }

        return sum;
    }
    
};
