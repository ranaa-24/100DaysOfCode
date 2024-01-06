class Solution
{
public:
    bool canWinNim(int n)
    {
        if (n % 4 == 0)
            return false;
        return true;
    }
};

/*
   if, n=1  -> w
       n=2  -> w
       n=3  -> w
       n=4  -> L
       n=5  -> w
       n=6  -> w
       n=7  -> w
       n=8  -> L
   if n is multiple of 4 we will lose
*/
