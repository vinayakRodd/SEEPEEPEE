class Solution {
public:
    int maxElement(vector<vector<int>>& mat,int m, int col){
        int maxVal=-1;
        int ind=-1;
        for(int i=0; i<m; i++){
            if(mat[i][col]> maxVal){
                maxVal= mat[i][col];
                ind=i;
            }
        }
        return ind;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int low=0;
        int high= n-1;
        while(low<=high){
            int mid=(low+ high)/2;
            int row= maxElement(mat, m, mid);
            int left = mid-1>=0 ? mat[row][mid-1] : -1;        // here why -1 because what is the first element itself is the peak or the elements in the last and the first row do not have top or bottom elements so inroder to get the peak element this condition is added here //
            int right = mid+1<n ? mat[row][mid+1] : -1;
            if ( mat[row][mid] > left && mat[row][mid]> right){
                return {row, mid};

            }
            else if(mat[row][mid] < left ){
                high = mid-1;
            }
            else{
                low= mid+1;
            }
        }
        return {-1, -1};
    }
};
