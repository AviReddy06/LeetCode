class MyCalendar {
    map<int, int> calendar; // startTime -> endTime

public:
    MyCalendar() {}
    
    bool book(int startTime, int endTime) {
        // First event starting at or after startTime
        auto next = calendar.lower_bound(startTime);
        
        // Check overlap with the next event
        if (next != calendar.end() && next->first < endTime) {
            return false;
        }
        
        // Check overlap with the previous event
        if (next != calendar.begin() && prev(next)->second > startTime) {
            return false;
        }
        
        calendar[startTime] = endTime;
        return true;
    }
};