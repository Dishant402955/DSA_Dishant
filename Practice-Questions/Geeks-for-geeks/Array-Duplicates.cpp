// Approach will be written soon

class Solution{
    public:
   
    void convertToWave(int n, vector<int>& arr){
        

        for( int i = 0 ; i < n ; i += 2){
        
            if( i+1 == n )   break;
             
            swap ( arr[i] , arr[i+1] );
        
        }
       

    } 
 
};