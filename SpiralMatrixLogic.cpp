vector<int> spiralMatrix(vector<vector<int>>&a) {
    
    int n = a.size();

    int m = a[0].size();

    int left = 0,right = m-1,top = 0,bottom = n-1;

    // Print the elements from Left to right //
    vector <int> v;

    int i=0;
    while(left <= right && top <= bottom){

        for(i=left; i<=right; i++)
            v.push_back(a[top][i]);                 // Traverse from left to right

        top++;                                       // Avoid printing the topmost element agian so decrease the index

        for(i=top; i<=bottom; i++)                  // Traverse from top+1 to bottom
            v.push_back(a[i][right]);

        right--;                                    // Avoid printing the rightmost element agian so decrease the index

        if (top <= bottom) {                        // Traverse from right - 1 to left
            for (i = right; i >= left; i--)
               v.push_back(a[bottom][i]);
        }
        bottom--;                                    // Avoid printing the bottommost element agian so decrease the index

        if (left <= right) {                        // Traverse from bottom -1 to top
            for (i = bottom; i >= top; i--)
               v.push_back(a[i][left]);
        }
        left++;                                      // Avoid printing the left most element agian so decrease the index


    }

    return v;
        
    
}
