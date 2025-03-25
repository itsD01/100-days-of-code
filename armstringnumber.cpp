#include <iostream>
using namespace std;
int armstrong(int n){
    int g;
    while(n>0){
        int last_digit = n%10;
        n = n/10; 
        cout<<last_digit<<endl;
        g = g + (last_digit * last_digit * last_digit);
    };
    if (g == n){
        cout<<"The number is an armstrong number";
    }
  
    
}
int main(){
    armstrong();
    return 0;
}
