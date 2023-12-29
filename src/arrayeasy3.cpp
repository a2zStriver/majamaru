int isSorted(int n, vector<int> a) {
    bool check=false ;
    for(int i=0 ; i<n-1 ; i++){
        if(a[i]>a[i+1]){
            check=true ;
            break;
        }
    }
    if(check)
        return 0 ;
    else
        return 1 ;
}