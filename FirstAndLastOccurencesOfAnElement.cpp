pair<int, int> firstAndLastPosition(vector<int>& a, int n, int x)
{
  
    pair<int,int> Position;

    int low = 0,high = n-1;
    
    int first = -1,last = -1;


    while(low<=high){

        int mid = (low+high)/2;


        if(a[mid] == x){
            first = mid;
            high = mid-1;
        }

        else
        if(a[mid] > x)
            high = mid-1;

        else
            low = mid+1;
        

    }


    low = 0;
    high = n-1;
    while(low<=high){

        int mid = (low+high)/2;

        if(a[mid] == x){
            last= mid;
            low = mid+1;
        }

        else
        if(a[mid] > x)
            high = mid-1;

        else
            low = mid+1;
        

    }

    Position.first = first;
    Position.second = last;

    return Position;
}
