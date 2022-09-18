/*An alphabetical continuous string is a string consisting of consecutive letters in the alphabet. In other words, it is any substring of the string
"abcdefghijklmnopqrstuvwxyz".
 For example, "abc" is an alphabetical continuous string, while "acb" and "za" are not.
 Given a string s consisting of lowercase letters only, return the length of the longest alphabetical continuous substring.

Example 1:

Input: s = "abacaba"
Output: 2
Explanation: There are 4 distinct continuous substrings: "a", "b", "c" and "ab".
"ab" is the longest continuous substring.
*/

class Solution {
public:
    int longestContinuousSubstring(string s) {
        
        int cnt = 1;
        int ans = 1;
        int n = s.size();
        
        for(int i=0 ; i<n-1; i++){
            if(s[i]+1 == s[i+1]) cnt++;
            else cnt=1;
            ans = max(ans,cnt);
        }
        
        return ans;
        
    }
};
