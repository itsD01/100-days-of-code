#include <iostream>
using namespace std;
void nStarDiamond(int N) {
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < N - i; j++) {
            cout << " ";
        }
        for (int k = 0; k < (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = N; i >= 1; i--) {
        for (int j = 0; j < N - i; j++) {
            cout << " ";
        }
        for (int k = 0; k < (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
}
int main() {
    int N;
    cin >> N;
    nStarDiamond(N);
    return 0;
}
