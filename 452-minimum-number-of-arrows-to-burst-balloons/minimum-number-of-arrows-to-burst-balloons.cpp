class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n=points.size();
        sort(points.begin(), points.end());
     
        int arrows = 0;
        vector<int> prev =points[0];

        for (int i=1; i<n; i++) {
            auto& curr = points[i];
            if (curr[0] > prev[1]) {
                arrows++;
                prev = curr;
            } 
            else 
                prev[1] = min(prev[1], curr[1]);
            
        }
        arrows++; // Add the last arrow for the final balloon
    //    cout << "arrows=" << arrows << "\n====\n";
        return arrows;
    }
};