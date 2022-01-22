class Solution{
    public:
    string longest(string names[], int n)
    {
        string str=names[0];
        int len =names[0].length();
        while(n>0)
        { n--;
          int length=names[n].length();
          if(len<length)
            { str = names[n]; len=length;
            }
        }
        
        return str;
    }
};
