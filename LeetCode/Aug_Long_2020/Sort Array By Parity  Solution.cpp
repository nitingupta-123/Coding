class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        
        if(A.size()==0||A.size()==1)
        {
            return A;
        }
        int even=0,odd=A.size()-1;
        while(even<odd&&even<A.size()&&odd>=0)
        {
            while(even<A.size()&&A[even]%2!=1) even++;
            while(odd>=0&&A[odd]%2!=0) odd--;
            if(even<odd&&odd>=0&&even<A.size())
            {
                swap(A[even],A[odd]);
            }
            even++;odd--;
        }
        return A;
    }
};
