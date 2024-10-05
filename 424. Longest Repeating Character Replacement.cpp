class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_map<char,int>m;
        int max_vow=0;
        int c=0;
        m['a']=1;
        m['e']=1;
        m['i']=1;
        m['o']=1;
        m['u']=1;
        for(int i=0;i<k;i++)
        {
            if(m.find(s[i])!=m.end())
            {
                c++;
            }

        }
        max_vow=max(max_vow,c);
        for(int i=k;i<s.size();i++)
        {
            if(m.find(s[i-k])!=m.end())
            {
                c--;
            }
            if(m.find(s[i])!=m.end())
            {
                c++;
            }
            max_vow=max(max_vow,c);
        }
        return max_vow;

        
    }
};
