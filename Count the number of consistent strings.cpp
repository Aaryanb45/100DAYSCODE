Input: allowed = "ab", words = ["ad","bd","aaab","baa","badab"]
Output: 2
Explanation: Strings "aaab" and "baa" are consistent since they only contain characters 'a' and 'b'

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {

        unordered_map<char,int>mp;

        for(auto x:allowed)
        {
            mp[x]=1;
        }
        int count=0;
        for(auto y:words)
        {
            int isconsistent =1;
            for(auto c:y)
            {
                if(mp[c]==0)
                {
                    isconsistent =0;
                    break;
                }
            }
            if(isconsistent ==1)
            {
                count++;
            }
        }
        return count;
    }
};
