int longestSuccessiveElements(vector<int>&a) {
    if(a.size() == 0)
        return 0;
        
    sort(a.begin(),a.end());


    int longest = 1;
    int countCurr = 0;
    int lastSmall = INT_MIN;

    set <int> st;

    for(int i=0; i<a.size(); i++)
        st.insert(a[i]);
        

    for(auto it = st.begin(); it != st.end(); it++){

        if(*it-1 == lastSmall){

            lastSmall = *it;
            countCurr++;
        }

        else    
        if(*it != lastSmall){
            countCurr = 1;
            lastSmall = *it;
        }

        

        if(countCurr > longest)
            longest = countCurr;
    }

    

    
    return longest;
}
