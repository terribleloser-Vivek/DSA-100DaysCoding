class Solution{
    public:
        long long find_multiplication(int a[], int b[], int n, int m)
    {
    int lar = a[0];
    int min = b[0];
    int i=0;
    while(i<n) 
    {
        if(a[i]>lar) 
          { lar=a[i]; }
    
       i++; 
    }
    
    i=0;
    while(i<m) 
    {
        if(b[i]<min) 
          { min=b[i]; }
    
       i++; 
    }
    
    return lar*min;
    
    }
};
