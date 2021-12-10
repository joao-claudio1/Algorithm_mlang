class Solution {
public:
    long long int reverse(long long int x) {
       long long int rev=0,re;
        while(x!=0){
            
            re=x%10;
            
            
            if(rev > INT_MAX/10 || rev == INT_MAX/10 && re > 7)
            {
                return 0;
            }
              if(rev < INT_MIN/10 || rev == INT_MIN/10 && re < -8)
            {
                return 0;
            }
            rev=rev*10+re;
            x/=10;
            
        }
        return rev;
    }
};