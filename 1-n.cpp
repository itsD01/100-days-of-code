void printNos(int n) {
        if (n == 0) return;  // Base case: Stop when n reaches 0
        printNos(n - 1);     // Recursive call with n-1
        cout << n << " ";    // Print the number
    }
};
