class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int size = arr.size(), count=0, XOR=0;
        if(size < 2)
            return 0;
        for(int i = 0; i < size-1; i++){
            int x = arr[i];
            for(int j = i+1; j<size; j++){
                x ^= arr[j];
                if(x == 0)
                    count += (j-i);
            }
        }
        return count;
    }
};