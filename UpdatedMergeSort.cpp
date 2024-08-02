
void merge(vector<int>&arr,int low,int mid,int high){

    vector <int> temp;

    int left = low;
    int right = mid+1;

    while(left <= mid && right <= high){

        if(arr[left] <= arr[right])
            temp.push_back(arr[left++]);

        else
            temp.push_back(arr[right++]);

    }

    while(left <= mid)
            temp.push_back(arr[left++]);

    while(right <= high)
        temp.push_back(arr[right++]);

    int k = 0;
    for(int i = low; i<=high; i++)
        arr[i] = temp[k++];
}

void mS(vector<int>&arr,int low,int high){

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

