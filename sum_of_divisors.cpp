int sumOfAllDivisors(int n){

    int totalSum = 0;

    for (int i = 1; i <= n; i++) {
        totalSum += (n / i) * i;
    }

    return totalSum;
}


