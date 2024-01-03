vector<int> rotateArray(vector<int>arr, int k) {
    int i, temp, n ;
    n = arr.size() ;
    for(int j=0 ; j<k ; j++){

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
    }
    return arr ;
}