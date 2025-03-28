class Solution {
  public:   
    int evenlyDivides(int n) {
        int result = 0, original = n; 

        while (n > 0) {
            int digit = n % 10;  
            if (digit != 0 && original % digit == 0) { 
                result++;
            }
            n /= 10; 
        }
        return result; 
    }
};
