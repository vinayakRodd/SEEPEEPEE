class Solution {
public:

     int FindIndex (vector<int> &a,int target,int start,int end) {

            int low = start,high = end;

            while(low<=high){

                int mid = (low+high)/2;

                if(a[mid] == target)
                    return true;

                else
                if(a[mid] > target)
                    high = mid-1;

                else
                    low = mid+1;

                    
            }

            return false;
    }

    bool search(vector<int>& a, int target) {
        
          
        int leftIndexEnd;

        for(int i=0; i<a.size()-1; i++){

            if(a[i] > a[i+1]){
                leftIndexEnd = i;
                break;
            }
        }

        int end = leftIndexEnd;
        bool LeftHalfIndex = FindIndex(a,target,0,end);
        
        bool RightHalfIndex = FindIndex(a,target,end+1,a.size()-1);
        
        if(LeftHalfIndex == true)
            return LeftHalfIndex;

        if(RightHalfIndex == true)
            return RightHalfIndex;

        return false;


    }
};
