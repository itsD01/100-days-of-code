class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        if (n < 2) return -1; 

        for (int i = 0; i < n - 1; i++) {
            int maxIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] > arr[maxIndex]) {
                    maxIndex = j;
                }
            }
            swap(arr[i], arr[maxIndex]);
        }

        
        for (int i = 1; i < n; i++) {
            if (arr[i] < arr[0]) return arr[i]; 
        }

        return -1; 
    }
};
