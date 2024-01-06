int longestSubarrayWithSumK(vector<int> a, long long k) {
    int i, n, j, first_index, last_index, count, temp_count ;
    long long sum ;
    first_index= last_index= 0; // keep track of subarray
    count= temp_count= 0 ; // total length of subarray
    n= a.size();
    
    while(last_index<n){
        sum=0 ; // add the elements in subarray
        for(i= first_index; i<n; i++){
            // if element is greater than k
            if(a[i]>k){
                first_index=i+1; // ommits index from subarray
                last_index=i+1;
                break;
            }
            // if element is equal to k
            else if(a[i]==k){
                temp_count=1; // length of subarray is 1 
                j=i+1;
                while(a[j]==0 && j<n){
                    temp_count = temp_count + 1 ;
                    j++ ;
                }

                j=i-1;
                while(a[j]==0 && j>-1){
                    temp_count = temp_count + 1 ;
                    j-- ;
                }
                first_index=i+1;
                last_index=i+1;
                break;
            }
            // if element is less than k
            else{
                sum= sum+a[i] ;
                // if addition in subarray is less than k
                if(sum<k)
                    last_index++ ;
                // if addition is equal to k                
                else if(sum==k){
                    temp_count=(last_index-first_index)+1 ; // lenth of subarray
                    j=last_index+1;
                    while(a[j]==0 && j<n){
                        temp_count = temp_count + 1 ;
                        j++ ;
                    }
                    
                    first_index++;
                    last_index=first_index;
                    break;
                }
                // if addition is greater than k
                else{
                    first_index++;
                    last_index= first_index;
                    break;
                }
            }
        }
        
        if(count<temp_count) // storing longest subarray which adds to form k
            count=temp_count;
    }
    return count ;
}