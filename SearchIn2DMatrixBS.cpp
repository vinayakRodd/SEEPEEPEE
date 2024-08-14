class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int target) {
        
        for(int i=0; i<a.size(); i++){
            
            int low = 0,high = a[i].size()-1;

            while(low <= high){

                int mid = (low+high)/2;

                if(a[i][mid] == target)
                    return true;

                else
                if(a[i][mid] > target)
                    high = mid-1;

                else
                    low = mid+1;

            

            }


        }

        return false;

    }
};
