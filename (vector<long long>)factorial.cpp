#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<long long> factorialNumbers(long long n) {
        vector<long long> result;
        long long fact = 1, i = 1;
        while (fact <= n) {
            result.push_back(fact);
            i++;
            fact = fact * i;
        }
        return result;
    }
};
