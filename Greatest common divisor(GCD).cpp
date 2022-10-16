int Solution::gcd(int A, int B) {
    
    if(A==0 and B != 0) return B;
    if(A!=0 and B == 0) return A;
    
    int result = min(A,B);
    
    while(result>0){
        if(A%result==0 and B%result == 0){
            break;
        }
        result--;
    }
    
   return result; 
}
