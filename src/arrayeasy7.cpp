vector<int> moveZeros(int n, vector<int> a) {
    int temp, i, j ;
    for(i=0 ; i<n ;i++){
        if(a[i]==0){
            for(j=i+1 ; j<n ; j++){
                if(a[j]!=0){
                    temp = a[j];
                    a[j]=0;
                    a[i]=temp;
                    break ;
                }
            }
        }
    }
    return a ;
}