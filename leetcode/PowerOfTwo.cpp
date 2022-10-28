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


//using celi and floor 
// log2(2^n) will give n so that mean it would be an pure int
// celi means 1.4 = 2
// floor means 1.4 = 1
// so if ans will be in float that means celi and floor value will be different 

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0)
            return false;
        return floor(log2(n)) == ceil(log2(n))?true:false;
    }
};
