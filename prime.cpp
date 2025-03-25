bool isPrime(int n){
    if(n < 2){
        cout << "NO" << endl;
        return false;
    }
    for(int i = 2; i * i <= n; i++){  // Loop till sqrt(n)
        if(n % i == 0){
            cout << "NO" << endl;
            return false;
        }
    }
    cout << "YES" << endl;
    return true;
}
