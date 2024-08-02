

void merge(vector<int>&arr,int low,int mid,int high){

    int i=low;
    int j=mid+1;

    vector<int> v;
    
    while(i<=mid && j<=high){

        if (arr[i] < arr[j]) {
            v.push_back(arr[i]);
            i++;
        }

        else {

            v.push_back(arr[j]);
            j++;
        }

    }

    while(i<=mid){
        v.push_back(arr[i]);
        i++;
    }

    while(j<=high){
        v.push_back(arr[j]);
        j++;
    }

    int m=0;
    for(int k=low; k<=high; k++)
        arr[k] = v[m++];


}

void mS(vector<int> &arr,int low,int high){

    

    int mid = (low+high)/2;

    if (low < high) {
        mS(arr, low, mid);
        mS(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}   



void mergeSort(vector < int > & arr, int n) {

    mS(arr,0,n-1);

}

