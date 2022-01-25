int multiply(int arr[], int n)
{  int sum1=0,sum2=0,i=0;
    while(i<n/2)
    {
        sum1=sum1+arr[i];
        i++;
    }
     i=n-1;
     while(i>=n/2)
    {
        sum2=sum2+arr[i];
        i--;
    }
 return sum1*sum2;
    
}
