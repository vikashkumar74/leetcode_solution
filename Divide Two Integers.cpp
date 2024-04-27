class Solution {
public:
    int divide(int dividend, int divisor) {
  if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;
         if (dividend == INT_MIN && divisor == 1)
            return INT_MIN;
   
        bool negative = (dividend > 0) ^ (divisor > 0);
        long long int absDividend = abs(dividend);
        long long int absDivisor = abs(divisor);
        
        int quotient = 0;
        while (absDividend >= absDivisor) {
            long long int temp = absDivisor;
            int multiple = 1;
        
            while (absDividend >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            absDividend -= temp; 
            quotient += multiple; 
        }
        
        if (negative)
            return -quotient;
        else
            return quotient;
    }
};
