class Solution{
    public:
    int getSum(int a[], int n) {
        
        int i,sum=0;
        for(i=0;i<n;i++)
        {
            sum = sum + a[i];
        }
        
        return sum;
        
    }   
};
