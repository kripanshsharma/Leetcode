class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int ele = arr[0], cnt = 1;
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > ele) {
                ele = arr[i];
                cnt = 1;
            }
            if (cnt == k){
                break;
            }
            cnt++;
        }
        return ele;
    }
};