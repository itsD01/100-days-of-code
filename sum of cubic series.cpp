int sumOfSeries(int n) {
        int g = 0;
        if (n == 0) return 0;
        g= sumOfSeries(n-1);
        g = g + (n*n*n);
        return g;
    }
