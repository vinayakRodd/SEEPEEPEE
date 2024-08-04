class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        

        vector<int> v;

        for(int i=0; i<nums.size(); i++){

            if(v.size() == 0)
                v.push_back(nums[i]);

            else{

                if(v[v.size()-1] != nums[i])
                    v.push_back(nums[i]);
            }
        }

        for(int i = 0; i<v.size(); i++)
                nums[i] = v[i];

        
        
    
        return v.size();
    }

};
