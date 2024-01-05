int traffic(int n, int m, vector<int> vehicle) {
	int i, j, first_index, last_index, temp_count, count ;
	first_index = last_index = 0 ; // for calculating consecutive no. of 1's 
	count = temp_count = 0 ; // for storing consecutive 1's 
	while(last_index<n){
		j=0 ; // for iterating flipped 0's
		for(i=first_index;i<n;i++){
			if(vehicle[i]==0 && j<m){
				//vehicle[i]=1 ; // this will change the array permenantly changing flipped 1's and we get wrong answer
				j++ ;
			}
			else if(vehicle[i]==0) // break the loop if all flipped 1's are over
				break ;
		}
		last_index=i ;
		temp_count = last_index-first_index ; // consecutive 1's
		if(count<temp_count)
			count = temp_count ; // updated total consecutive 1's
		first_index++ ; // for starting new loop of consecutive 1's
	}

	return count ;
}