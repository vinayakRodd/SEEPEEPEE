class Solution {
public:
    int missingNumber(vector<int>& nums) {


        int XOR1=0;
        int XOR2=0;
        for(int i=1; i<=nums.size(); i++)
            XOR1 ^= i;

        for(int i=0; i<nums.size(); i++)
            XOR2 ^= nums[i];


        return XOR1 ^ XOR2;
    }
};
