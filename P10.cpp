void nStarTriangle(int N) {
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = N - 1; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
