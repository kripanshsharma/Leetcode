class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string ans = "";
        int n= nums.size();
        vector<string> v;

        for(int i=0; i<n; i++){
            v.push_back(to_string(nums[i]));
            /*if(nums[i]== 0){
                v.push_back(to_string(nums[i]));
            }
            
            while(nums[i]== 0){
                int ele = nums[i]%10;
                v.push_back(to_string(ele));
                nums[i]= nums[i]/10;
            }*/
            
        }
        //sort(v.end(), v.begin()); //overflow memory
        //ans = convertToString(v);

        sort(v.begin(),v.end(),comp);
        if(v[0]=="0"){
            return "0";
        }
        for(string x: v)
        {
            ans+=x;
        }
        return ans;
        
    }
    static bool comp(string a,string b)
    {
        return a+b >b+a;
    }

    /*string convertToString(vector<string>& nums){
    int i, j=0;
    string s = "";
    for (i = 0; i < nums.size(); i++) {
        s+=nums[i];
        }
        return s;
    }*/
};