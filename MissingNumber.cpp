Input: nums = [3,0,1]
Output: 2
Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len,result,sum1,sum2=0;
        len=nums.size();
        sum1=len*(len+1)/2;
        for (int i=0;i<len;i++)
        {
            sum2=sum2+nums[i];

        }
        result=sum1-sum2;
        return result;
        
    }
};
