class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    int i=0,count=0;
	    while(i<n) 
      {
         if(arr[i]==x) 
           { count++; }
    
          i++; 
      } return count;
	}
};
