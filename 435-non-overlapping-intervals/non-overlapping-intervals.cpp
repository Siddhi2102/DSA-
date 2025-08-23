    struct In{
        int start;
        int end;
    };
class Solution {
public:
    static bool compare(vector<int> a,vector<int> b){
        return (a[1]<b[1]);
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {

        sort(intervals.begin(),intervals.end(),compare);

        int prev=0,count=1;
        int n=intervals.size();
        //in this soluton we are counting all the possible pairs that are non overlapping 
        //and perfect and subtarct from the toatal pairs that is why it is n-count

        for(int i=1;i<n;i++){
            if(intervals[prev][1]<=intervals[i][0]){
                prev=i;
                count++;
            }
           
        }
        return n-count;
    }
};