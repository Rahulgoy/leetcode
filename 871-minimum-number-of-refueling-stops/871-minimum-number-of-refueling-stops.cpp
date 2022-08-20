class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        // int i = 0, res;
        // int cur=startFuel;
        // priority_queue<int>pq;
        // for (res = 0; cur < target; res++) {
        //     while (i < stations.size() && stations[i][0] <= cur)
        //         pq.push(stations[i++][1]);
        //     if (pq.empty()) return -1;
        //     cur += pq.top(), pq.pop();
        // }
        // return res;
        
        
        int i=0,res;
        priority_queue<int>pq;
        
        for(res=0;startFuel<target;res++){
            while(i<stations.size() and stations[i][0]<=startFuel){
                pq.push(stations[i++][1]);
            }
            if(pq.empty()) return -1;
            startFuel+=pq.top();pq.pop();
            
        }
        return res;
    }
};