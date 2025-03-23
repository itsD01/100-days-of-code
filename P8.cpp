#include <iostream>
using namespace std;
void reverseNStarTriangle(int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int k = 0; k < (2 * (N - i) - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
}
int main() {
    int N;
    cin >> N;
    reverseNStarTriangle(N);
    return 0;
}
