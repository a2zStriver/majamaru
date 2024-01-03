#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    int i, temp ;
    for(i=0 ; i<n ; i++){
        if(i==0){
            temp=arr[n-1] ;
            arr[n-1]=arr[i] ;
        }
        else if(i==(n-1)){
            arr[i-1]=temp ;
        }
        else{
            arr[i-1]=arr[i] ;
        }
    }
    return arr ;
}