#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    
    int largenum=0 ;
    for(int i=0 ; i<n;i++){
        if(arr[i]>largenum)
            largenum=arr[i] ;
    }
    return largenum ;

}