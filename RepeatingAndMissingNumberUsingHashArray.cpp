 vector<int> hash(a.size()+1,0);
    int missing=-1,repeating=-1;

    for(int i=0; i<a.size(); i++)
        hash[a[i]]++;

    for(int i=1; i<hash.size(); i++){


        if (hash[i] == 0) 
            missing = i;

        if (hash[i] > 1) 
            repeating  = i;
        
        if(repeating != -1 && missing != -1)
            break;
        
        
    }
    
   
   
 
    return {repeating,missing};
