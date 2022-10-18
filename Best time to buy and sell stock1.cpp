int Solution::maxProfit(const vector<int> &A) {
    
    if(A.size()==0) return 0;
    
    int buy = A[0], profit = 0, maxprofit = 0;
    
    for(int i=1; i<A.size(); i++){
        if(A[i]<buy){
            buy = A[i];
            profit = 0;
        }
        else if(profit<(A[i]-buy)){
            profit = A[i]-buy;
            if(profit>maxprofit) maxprofit = profit;
        }
    }
    return maxprofit;
}
