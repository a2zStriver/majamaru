int removeDuplicates(vector<int> &arr, int n) {
	int i=0, j=0 ;
	// bool check;
	// cout<<arr.size() ;

	// for(i=0 ; i<n ; i++){
	// 	check = true ;
 	// 	for(j=i+1 ; j<n ; j++){
	// 		 if(arr[i]==arr[j] && check){
	// 		 	arr.erase(arr.begin()+j) ;
	// 			n=arr.size() ;
	// 			check = false ;
	// 		 }
	// 		 else if(arr[i]==arr[j-1]){
	// 		 	arr.erase(arr.begin()+j) ;
	// 			n=arr.size() ;
	// 		 }
	// 	 }
	// }

	// for(i=0 ; i<n ; i++){
	// 	j=i+1 ;	
	// 	k=0 ;	
 	// 	while(arr[i]==arr[j]){
	// 		 ++k ;
	// 		 j++ ;
	// 	}
	// 	for(j=0 ; j<k ; j++){
	// 		arr.erase(arr.begin()+(i+1)) ;
	// 	}
	// 	n=arr.size() ;
	// }
	// return arr.size() ;

	while(i<n){
		if(arr[j]==arr[i])
			i++ ;
		else{
			arr[j+1]=arr[i] ;
			j++ ;
		}
	}
	return ++j ;
}