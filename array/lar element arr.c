// C function to find maximum in arr[] of size n
int largest(int arr[], int n) {
    
    int lar=arr[0];
    for( int i=0;i<n;i++)
    {
        if(lar<arr[i])
            {  lar=arr[i]; }
    }
    
    return lar;
}
