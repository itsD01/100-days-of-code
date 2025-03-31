class Solution {
public:
    int getSecondLargest(vector<int>& arr) {
        int n = arr.size();
        if (n < 2) return -1;
        
        int largest = INT_MIN, secondLargest = INT_MIN;
        
        for (int i = 0; i < n; i++) {
            if (arr[i] > largest) {
                secondLargest = largest;
                largest = arr[i];
            } else if (arr[i] > secondLargest && arr[i] != largest) {
                secondLargest = arr[i];
            }
        }
        
        return (secondLargest == INT_MIN) ? -1 : secondLargest;
    }
};
