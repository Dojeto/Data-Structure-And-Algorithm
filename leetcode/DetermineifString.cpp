class Solution {
public:
    bool halvesAreAlike(string s) {
        map <int,int> obj;
        int j = s.length()-1;
        int ref;
        for(int i=0;i<s.length()/2;i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'|| s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                obj[1]++;
            }
            if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' || s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'O' || s[j] == 'U')
            {
                obj[2]++;
            }
            j--;
        }
        if(obj[1] != obj[2])
        {
            return false;
        }
        return true;
    }
};
