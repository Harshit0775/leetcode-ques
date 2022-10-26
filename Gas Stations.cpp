#include <iostream>
#include <numeric>

int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
    
    if(accumulate(A.begin(),A.end(),0)<accumulate(B.begin(), B.end(), 0)) return -1;
    
    int remaining_fuel = 0;
    int ans = 0;
    
    for(int i=0; i<A.size(); i++){
        remaining_fuel+= A[i] - B[i];
        
        if(remaining_fuel<0){
            ans = i+1;
            remaining_fuel = 0;
        }
    }
    return ans;
}
