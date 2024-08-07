class Solution {
public:

    

    int FindIndex (vector<int> &a,int target,int start,int end) {

            int low = start,high = end;

            while(low<=high){

                int mid = (low+high)/2;

                if(a[mid] == target)
                    return mid;

                else
                if(a[mid] > target)
                    high = mid-1;

                else
                    low = mid+1;

                    
            }

            return -1;
    }


    int search(vector<int>& a, int target) {
        
        int LeftHalfIndex;
        int RightHalfIndex;
        int leftIndexEnd;
        for(int i=0; i<a.size()-1; i++){

            if(a[i] > a[i+1]){
                leftIndexEnd = i;
                break;
            }
        }

        int end = leftIndexEnd;
        LeftHalfIndex = FindIndex(a,target,0,end);
        
        RightHalfIndex = FindIndex(a,target,end+1,a.size()-1);
        
        if(LeftHalfIndex != -1)
            return LeftHalfIndex;

        if(RightHalfIndex != -1)
            return RightHalfIndex;

        return -1;


    }
};
