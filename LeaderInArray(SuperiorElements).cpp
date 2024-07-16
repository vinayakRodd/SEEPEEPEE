vector<int> superiorElements(vector<int>&a) {
    

    vector <int> v;
    int n = a.size();
    int max=0;

    for(int i=n-1; i>=0; i--){

      if (a[i] > max) {
        max = a[i];
        v.push_back(max);
      }
    }

    return v;

    
}
