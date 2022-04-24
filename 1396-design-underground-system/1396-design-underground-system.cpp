class UndergroundSystem {
    unordered_map<int,pair<string,int>> checkins;
    unordered_map<string,unordered_map<string,pair<int,int>>>v; //time,count
public:
    
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        checkins[id]=make_pair(stationName,t);
    }
    
    void checkOut(int id, string stationName, int t) {
        if(v[checkins[id].first].count(stationName)<=0){
            v[checkins[id].first][stationName].second=1;
            v[checkins[id].first][stationName].first=t-checkins[id].second;
        }else{
            v[checkins[id].first][stationName].second++;
            v[checkins[id].first][stationName].first+=t-checkins[id].second;
        }
    }
    
    double getAverageTime(string startStation, string endStation) {
        return (double)((double)v[startStation][endStation].first/(double)v[startStation][endStation].second);
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */