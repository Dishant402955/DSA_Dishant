class Solution {
  public:
    long long sumMatrix(long long n, long long q) {

        if ( q <= 2*n ){
            
            if( q <= n ){
                return q-1;
            }else{
                return 2*n + 1 - q ;
            }
            
            
        }else{
            return 0;
        }
    
    }
};