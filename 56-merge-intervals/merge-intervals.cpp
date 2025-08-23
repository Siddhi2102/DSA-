class Solution {
public:
    static bool compare(vector<int>a,vector<int>b){
    return a[0]<b[0];
 }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;

        sort(intervals.begin(),intervals.end(),compare);

        int start=intervals[0][0];
        int end=intervals[0][1];

        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]>end){
                vector<int>temp;
                temp.push_back(start);
                temp.push_back(end);

                ans.push_back(temp);
                start=intervals[i][0];
                end=intervals[i][1];
            }

            else{
                start=min(start,intervals[i][0]);
                end=max(end,intervals[i][1]);

            }
        }
        ans.push_back({start,end});
        return ans;
        
    }
};