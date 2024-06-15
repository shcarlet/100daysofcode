class TimeMap {
    private:
       unordered_map<string,vector<pair<int,string>>>keystore;
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        keystore[key].emplace_back(timestamp,value);
    }
    
    string get(string key, int timestamp) {
        auto& values=keystore[key];
        int l=0,h=values.size()-1;
        string res="";
        while(l<=h)
        {
            int m=(l+h)/2;
            if(values[m].first<=timestamp)
            {
                res=values[m].second;
                l=m+1;
            }
            else
            {
                h=m-1;
            }
        }
        return res;
    }
};
