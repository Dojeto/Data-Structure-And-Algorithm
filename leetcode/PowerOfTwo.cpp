//TLE
class Solution {
public:
    bool checkPow(int n)
    {
        if(n % 2 != 0)
        {
            return false;
        }
        return isPowerOfTwo(n/2);
    }
    bool isPowerOfTwo(int n) {
        if(n==1){
            return true;
        }
        return checkPow(n);
    }
};
