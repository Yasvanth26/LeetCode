class Solution {
public:
    bool isPalindrome(int x) {
        long n=x,r=0;
        if(x<0)
        return false;
        while(n!=0)
        {
            r=r*10+n%10;
            n=n/10;
        }
    if(x==r)
    {
        return true;
    }
    else 
    return false;
    }
};
