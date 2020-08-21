class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        
        if(A.size()==0||A.size()==1)
        {
            return A;
        }
        int even=0,odd=A.size()-1;
        
        while(even<odd)
        {
            while(even<odd && A[even]%2!=1) even++;
            
            while(odd>even&&A[odd]%2!=0) odd--;
            
            if(even<odd)
            {
                swap(A[even],A[odd]);
            }
            
            even++;odd--;
        }
        
        return A;
        
    }
    
};
