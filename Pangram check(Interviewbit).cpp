/*Given a sentence represented as an array A of strings that contains all lowercase alphabets.
Chech if it is a pangram or not.
A pangram is a unique sentence in which every letter of the lowercase alphabet is used at least once.*/

int Solution::solve(vector<string> &A) {
    
    unordered_set<char>ump;
    for(auto& str: A){
        for(char c: str){
            ump.insert(c);
        }
    }
    
    if(ump.size()==26) return 1;
    else return 0;
    
}
