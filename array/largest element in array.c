int largest(int arr[], int n) 
{
    int lar = arr[0];
    int i=0;
    while(i<n) 
    {
        if(arr[i]>lar) 
          { lar=arr[i]; }
    
       i++; 
    }
    return lar;
}
