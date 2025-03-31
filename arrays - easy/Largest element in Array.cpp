class Solution {
  public:
    int largest(vector<int> &arr) {
        int j = arr[0];  

        for (int i = 1; i < arr.size(); i++) { 
            if (arr[i] > j) {
                j = arr[i];
            }
        }

        return j;  
    }
};
