int Solution::candy(vector<int> &A) {
    
    int n = A.size();
    vector<int>left(n+1, 1);
    
    for(int i=1; i<n; i++){
        if(A[i]>A[i-1]) left[i] = left[i-1]+1;
    }
    
    int right = 1;
    
    for(int i = n-2; i>=0; i--){
        if(A[i]>A[i+1]){
            right++;
            left[i] = max(right, left[i]);
        }else right =1;
    }
    
    int sum = 0;
    
    for(int i=0; i<n; i++){
        sum+=left[i];
    }
    return sum;
}
