vector<int> alternateNumbers(vector<int>&a) {


    int posEve = 0;
    int posOdd = 1;
    
    vector<int> v(a.size(),0);

    for(int i=0; i<a.size(); i++){


        if(a[i] > 0){
            v[posEve] = a[i];
            posEve += 2; 
        }
        else{

            v[posOdd] = a[i];
            posOdd += 2;
        }
    }

    
    return v;

}
