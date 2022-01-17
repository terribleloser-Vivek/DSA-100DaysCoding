string temp,ans;
        
        if( 9 * D < S )
       {
           temp+="-1";
           return temp;  // It's not possible if sum is less than max nor of digits
       }
       
       // MAIN CODE
       
       for(int i = D-1;i>0;i--)
      {
            
          if(S>9)
          {
              ans += to_string(9);
              S = S-9;
          }
          else
          {
              ans+= to_string(S-1);
              S = S-(S-1);
          }
      }
       
      if(S>0)
      ans+=to_string(S);
      
      else
      {
          ans+=to_string(1);
      }
      
      reverse(ans.begin(),ans.end());
      return ans;
