Input: chars = ["a","a","b","b","c","c","c"]
Output: Return 6, and the first 6 characters of the input array should be: ["a","2","b","2","c","3"]
Explanation: The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".

OUTPUT:
class Solution {
    public :
      int compress(vector<char>& chars) {
        int i=0;
        int ansIndex=0;
        int n=chars.size();
 
        while(i<n)
        {
            int j=i+1;
            while(j<n && chars[i]==chars[j])
            {
                j++;
            }
            //yaha kab aaoge jab poora vector traverse krdia hoga
            //ya for new/Different character encounter hojaye
            //old character store karlo
            chars[ansIndex++]=chars[i];
            int count=j-i;
            if(count>1)
            {
                //converting into single digit and saving the answer
                string cnt= to_string(count);
                for (char ch: cnt)
                {
                    chars[ansIndex++]=ch;
                }
            }
            i=j;

        }
        return ansIndex;
    }
};
