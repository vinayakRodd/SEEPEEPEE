vector<int> ans;
    

    sort(a.begin(),a.end());

    
    int XOR2;
    int pos = INT_MIN;
    int XOR=0;
    int flag = 0;
    int XOR1=0;

    for (int i = 0; i < a.size()-1; i++) {

      XOR2 = a[i] ^ a[i + 1];
      if (XOR2 == 0 && flag != 1) {
        ans.push_back(a[i]);
        pos = i;
        flag = 1;
       // break;
      }


      XOR1 ^= i+1;

      if (pos + 1 != i) {
        
        XOR ^= a[i];
      }
    }

    
    
    if (pos + 1 != a.size()-1)
        XOR ^= a[ a.size()-1];
    
    XOR1 ^= a.size();

    int n = XOR^XOR1;
   
  

    ans.push_back(XOR1^XOR);

    
    return ans;
