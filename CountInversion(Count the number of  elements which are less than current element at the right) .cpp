int merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; // temporary array
    int i = low;      // starting index of left half of arr
    int j = mid + 1;   // starting index of right half of arr

    //Modification 1: cnt variable to count the pairs:
    int count = 0;

    //storing elements in the temporary array in a sorted manner//

    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]) {               // Make sure here we are moving ahead when right element is equal to the current element, by the definition of the problem itself states that right element should be less than the current element and not equal .. if its equal move ahead //
            temp.push_back(arr[i]);
            i++;
        }
        else {
            count += (mid - i + 1);
            temp.push_back(arr[j]);//Modification 2
            j++;
        }
    }

    // if elements on the left half are still left //

    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    //  if elements on the right half are still left //
    while (j <= high) {
        temp.push_back(arr[j]);
        j++;
    }

    int k=0;
    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[k++];
    }

    return count; // Modification 3
}

int mS(vector<int> &arr, int low, int high) {
    int count = 0;
    
    int mid = (low + high) / 2 ;

    if (low < high) {
        count += mS(arr, low, mid);      // left half
        count += mS(arr, mid + 1, high); // right half
        count += merge(arr, low, mid, high);
    }    
                                       // merging sorted halves
    return count;
}

int numberOfInversions(vector<int>&a, int n) {

    // Count the number of pairs:
    return mS(a, 0, n - 1);
}
