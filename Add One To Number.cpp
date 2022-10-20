vector<int> Solution::plusOne(vector<int> &A) {
    
    int carry = 1;
    
    for(int i=A.size()-1; i>0; i--){
        if(A[i]+carry == 10){
            A[i]=0;
            carry=1;
        }
        else{
            A[i]+=carry;
            carry=0;
        }
    }
    
    if(A[0]+carry==10){
        A[0]=0;
        A.insert(A.begin(),1);
    }else{
        A[0]+=carry;
        while(A[0]==0){
            A.erase(A.begin());
        }
    }
    
    return A;
}
