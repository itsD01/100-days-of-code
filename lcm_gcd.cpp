#include <iostream> 
using namespace std;
int findGCD(int a, int b) {
    if (a == 0)
        return b;
    return findGCD(b % a, a);
}
int lcm(int a, int b){
    int lcm =  (a * b) / findGCD(a,b);
    return lcm;
}

int main(){ 
    int a = 35, b = 15;
    int g = findGCD(a, b);
    int l = lcm(a,b);
    cout << g<<","<<l<< endl;
    return 0; 
}
