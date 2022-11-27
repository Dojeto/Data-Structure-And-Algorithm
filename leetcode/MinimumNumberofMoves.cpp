class Solution {
public:
    int minMovesToMakePalindrome(string s) {
        int lt = 0;
        int rt = s.length() - 1;
        int count = 0;
        while(lt < rt)
        {
            int l=lt,r=rt;
            while(s[l] != s[r]) r--;

            if(l==r)
            {
                swap(s[r],s[r+1]);
                count++;
                continue;
            }
            else{
                while(r<rt)
                {
                    swap(s[r],s[r+1]);
                    count++;
                    r++;
                }
            }
            lt++;
            rt--;
        }
        return count;
    }
};
