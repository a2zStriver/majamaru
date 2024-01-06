#include<vector>

int getSingleElement(vector<int> &arr){
	int n, i ;
	n = arr.size() ; // total elements in an array

	for(i=0;i<n-1;i++){ 
		
		if(arr[i]==arr[i+1]){
			i++ ; // required to jump on to next different element 
		}
		else
			return arr[i] ; 
	}

	return arr[n-1]	; // returns if the last element is appeared only once
}