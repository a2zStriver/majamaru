vector < int > sortedArray(vector < int > a, vector < int > b) {
    int n, m, i, j, k, l ;
    vector <int> ans ;
    n=a.size() ; // elements in array a 
    m=b.size() ; // elements in array b
    i=0 ; // iterating array a
    j=0 ; // iterating array b
    l=0 ; // keep track of elements added in ans
    for(k=0;k<(m+n);k++){
        // for 0th index in ans
        if(l==0){ 
            if(a[i]==b[j]){
                ans.push_back(a[i]) ;
                i++ ;
                j++ ;
                k++ ; // reducing the size of ans according to duplicates
            }
            else if(a[i]<b[j]){
                ans.push_back(a[i]) ;
                i++ ;
            }
            else{
                ans.push_back(b[j]) ;
                j++ ;
            }
            l++ ;
        }
        // for indexes greater than 0 in ans
        else{
            // if both the arrays are in limit
            if(i<n && j<m){ 
                if(a[i]==b[j]){
                    if(ans[l-1]!=a[i]){
                        ans.push_back(a[i]) ;
                        l++ ; 
                    }
                    i++ ;
                    j++ ;
                    k++ ; // reducing the size of ans according to duplicates
                }
                else if(a[i]<b[j]){
                    if(ans[l-1]!=a[i]){
                        ans.push_back(a[i]) ;
                        l++ ;
                    }
                    i++ ;
                }
                else{
                    if(ans[l-1]!=b[j]){
                        ans.push_back(b[j]) ;
                        l++ ;
                    }
                    j++ ;
                }
            }
            // if array a's limit exceeded
            else if(i>=n && j<m){
                if(ans[l-1]!=b[j]){
                    ans.push_back(b[j]) ;
                    l++ ;
                }
                j++ ;
            }
            // if array b's limit exceeded
            else{
                if(ans[l-1]!=a[i]){
                    ans.push_back(a[i]) ;
                    l++ ;
                }
                i++ ;
            }
        }
    }
    return ans ;
}