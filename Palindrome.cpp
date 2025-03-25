class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false; // Negative numbers can't be palindromes
        int rev = 0, temp = x;
        while (temp > 0) {
            rev = rev * 10 + temp % 10;
            temp /= 10;
    }
    return x == rev;

        
    }
};


bool isPalindrome(const string& str) {
    int left = 0, right = str.size() - 1;
    while (left < right) {
        if (str[left++] != str[right--])
            return false;
    }
    return true;
}
