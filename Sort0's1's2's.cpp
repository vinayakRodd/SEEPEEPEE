#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    int num0 = 0;
    int num1 = 0;
    int num2 = 0;
    int temp;

    for(int i=0; i<arr.size(); i++){

        if(arr[i] == 0)
            num0++;

        else
        if(arr[i] == 1)
            num1++;
        else
        if(arr[i] == 2)
            num2++;
        
    }

    for(int i=0; i<arr.size(); i++){

        if(i < num0 )
            arr[i] = 0;

        else
        if(i < num0+num1)
            arr[i] = 1;

        else
        if(i < num0+num1+num2)
            arr[i] = 2;
    }
        
}

    

