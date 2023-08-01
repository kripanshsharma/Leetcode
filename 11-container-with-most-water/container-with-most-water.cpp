class Solution {
public:
    int maxArea(vector<int>& height) {
        int h,area=0;
        int j= height.size()-1, i=0;
        while(j>i){
            int l= j-i;
            h= min(height[j], height[i]);
            int area0 = h*l;
            area = max(area, area0);

            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }


        /*for(int i=0; i<height.size(); i++){
            for(int j=0; j<height.size(); j++){
                if(height[j]>=height[i]){
                    h=height[i];
                   
                }
                else{
                    h=height[j];
                    
                }
                while(area< h*(j-i)){
                    area=h*(j-i);
                }

            }
        }*/

        return area;
    }
};