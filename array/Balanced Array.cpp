class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
       int sum1=0,sum2=0,i=0;
    while(i<n/2)
    {
        sum1=sum1+a[i];
        i++;
    }
     i=n-1;
     while(i>=n/2)
    {
        sum2=sum2+a[i];
        i--;
    }
 return abs(sum1-sum2);
    }
};
