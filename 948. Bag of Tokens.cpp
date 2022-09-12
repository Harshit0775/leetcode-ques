/*
You have an initial power of power, an initial score of 0, and a bag of tokens where tokens[i] is the value of the ith token (0-indexed).
Your goal is to maximize your total score by potentially playing each token in one of two ways:

    If your current power is at least tokens[i], you may play the ith token face up, losing tokens[i] power and gaining 1 score.
    If your current score is at least 1, you may play the ith token face down, gaining tokens[i] power and losing 1 score.

Each token may be played at most once and in any order. You do not have to play all the tokens.
Return the largest possible score you can achieve after playing any number of tokens.

 Example 1:

Input: tokens = [100], power = 50
Output: 0
Explanation: Playing the only token in the bag is impossible because you either have too little power or too little score.

Example 2:

Input: tokens = [100,200], power = 150
Output: 1
Explanation: Play the 0th token (100) face up, your power becomes 50 and score becomes 1.
There is no need to play the 1st token since you cannot play it face up to add to your score.
*/

// Time Complexity: O(NlogN) (O(NlogN) for sorting & O(N) for two pointers.)
// Space Complexity: O(logN)
// where N is the number of tokens
class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        // play i-th token face up -> lose tokens[i] power -> choose the smallest one
        // play i-th token face down -> gain tokens[i] power -> choose the largest one
        // hence, sort tokens first
        sort(tokens.begin(), tokens.end());
        // two pointes - l for tracking face up & r for tracking face down
        int l = 0, r = tokens.size() - 1;
        int cur_score = 0, mx_score = 0;
        while (l <= r) {
            // there are 3 cases
            if (tokens[l] <= power) {
                // case 1. play l-th tokens face up if its power <= the current power
                // ---
                // losing tokens[l] power
                power -= tokens[l];
                // and gaining 1 score
                cur_score += 1;
                // cur_score can be mx_score potentially
                mx_score = max(mx_score, cur_score);
                // move the pointer to the right
                l += 1;
            } else if (cur_score >= 1) {
                // case 2. play r-th tokens face down if the current score is at least 1
                // ---
                // gaining tokens[r] power
                power += tokens[r];
                // and losing 1 score
                cur_score -= 1;
                // move the pointer to the left
                r -= 1;
            } else {
                // case 3. impossible to play
				// ---
                // either you don't enough power or enough score
                break;
            }
        }
        return mx_score;
    }
};
