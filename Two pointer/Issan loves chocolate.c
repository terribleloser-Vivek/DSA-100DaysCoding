

int chocolates(int arr[], int n)
{   int left=0;
    int right=n-1;
    
    while(n>0)
    {   n--;
        if(arr[left]<arr[right])
        {  right=right-1;
        }
        else
        {
          left=left+1;   
        }
    }
    return arr[right];
}
