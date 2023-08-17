class Solution {
public:
    int minimumSum(int num) {
        // vector<int> arr;
        // while(num!=0){
        //     arr.push_back(num%10);
        //     num = num/10;
        // }
        // sort(arr.begin(), arr.end());
        // int sum1 = (10*arr[0] + arr[2]) + (10*arr[1] + arr[3]);
        // int sum2 = (10*arr[0] + arr[3]) + (10*arr[1] + arr[2]);
        // int res = min(sum1, sum2);
        // return res;
        
        string s = to_string(num);
        sort(s.begin(), s.end());
        int res = (s[0] - '0' + s[1] - '0') * 10 + s[2] - '0' + s[3] - '0';
        return res;
    }
};