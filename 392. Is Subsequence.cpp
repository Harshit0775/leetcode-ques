/*Given two strings s and t, return true if s is a subsequence of t, or false otherwise.
 A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the 
 characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

 Example 1:
 Input: s = "abc", t = "ahbgdc"
 Output: true

*/


class Solution {
public:
    bool isSubsequence(string s, string t) {
        int idx = 0;
        for(int i=0; i<t.size(); i++){
            if(t[i]==s[idx]) idx++;
        }
        if(idx==s.size()) return true;
        else return false;
    }
};
