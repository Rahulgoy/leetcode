class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int i = 0, res;
        int cur=startFuel;
        priority_queue<int>pq;
        for (res = 0; cur < target; res++) {
            while (i < stations.size() && stations[i][0] <= cur)
                pq.push(stations[i++][1]);
            if (pq.empty()) return -1;
            cur += pq.top(), pq.pop();
        }
        return res;
    }
};