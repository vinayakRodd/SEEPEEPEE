int longestSuccessiveElements(vector<int>&a) {
    if(a.size() == 0)
        return 0;
            
    sort(a.begin(),a.end());

    int longest = 1;
    int countCurr = 0;
    int lastSmall = INT_MIN;
    for(int i=0; i<a.size(); i++){

        if(a[i]-1 == lastSmall){

            lastSmall = a[i];
            countCurr++;
        }

        else    
        if(a[i] != lastSmall){
            countCurr = 1;
            lastSmall = a[i];
        }

        

        if(countCurr > longest)
            longest = countCurr;
    }

    

    
    return longest;
}
