class UndergroundSystem {
public:
    unordered_map<int,pair<string,int>> mp_checkIn;
    unordered_map<string,pair<double,int>> mp_totalTime;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        mp_checkIn[id]={stationName , t};
    }
    
    void checkOut(int id, string stationName, int t) {
        auto mp_c = mp_checkIn[id];
        mp_checkIn.erase(id);
        
        string routeName = mp_c.first+"_"+stationName;
        mp_totalTime[routeName].first += (t-mp_c.second);
        mp_totalTime[routeName].second += 1;
    }
    
    double getAverageTime(string startStation, string endStation) {
        string routeName=startStation+"_"+endStation;
        auto &route = mp_totalTime[routeName];
        return route.first/route.second;
        
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */