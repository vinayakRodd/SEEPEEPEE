class Solution {
public:

    int MaxEle(vector<int>& piles){

        int n = piles.size();
        int Largest = -1;

        for(int i=0; i<n; i++){
                
                if(piles[i] > Largest)
                    Largest = piles[i];
        }

        return Largest;
    }

    long long  checkSum(vector<int> &piles,int midEle){

        long long sum = 0;                                       // Here Use long long or else runtime error will be given //

        for(int i=0; i<piles.size(); i++)
            sum += ceil((double)piles[i]/(double)midEle);
        
        return sum;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        
        int max = MaxEle(piles);
      

        int low = 1,high = 2*max;

        int ans;

        while(low<=high){

            int mid = (low+high)/2;
            
            
            if(checkSum(piles,mid) <= h){
                
                ans = mid;
                high = mid-1;
            }

            else
                low = mid+1;
        }

        return ans;
        
    }
};
