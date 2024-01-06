int findWinner(int n, int A[]){
        // code here
        int xorr=0;
        for(int i=0; i<n; i++)
        {
            xorr ^= A[i];
        }
        
        if(xorr==0) return 1;
        else return (n%2 == 0 ? 1 : 2);

    }