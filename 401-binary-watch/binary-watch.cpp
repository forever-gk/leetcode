// A binary watch has 4 LEDs on the top which represent the hours (0-11), and the 6 LEDs on the bottom represent the minutes (0-59).
// Each LED represents a zero or one, with the least significant bit on the right.
//
// For example, the above binary watch reads "3:25".
//
// Given a non-negative integer n which represents the number of LEDs that are currently on, return all possible times the watch could represent.
//
// Example:
// Input: n = 1Return: ["1:00", "2:00", "4:00", "8:00", "0:01", "0:02", "0:04", "0:08", "0:16", "0:32"]
//
//
// Note:
//
// The order of output does not matter.
// The hour must not contain a leading zero, for example "01:00" is not valid, it should be "1:00".
// The minute must be consist of two digits and may contain a leading zero, for example "10:2" is not valid, it should be "10:02".
//
//


class Solution {
public:
    vector<string> readBinaryWatch(int num) {
        vector<string> times;
        uint16_t temp = 0;
        nums(10, num, temp, times);
        return times;
    }
    
    void nums(int places, int num, uint16_t &temp, vector<string> &times)
    {
        if (places == num || num == 0)
        {
            if (num!=0)
                temp |= ~(0x3ff << places);
            uint8_t minutes = temp & 0x3f;
            uint8_t hour = (temp >> 6) & 0xf;
            if (num!=0)
                temp &= 0x3ff << places;
            if (hour > 11 || minutes > 59)
                return;
           
            times.emplace_back(to_string(hour) + (minutes < 10 ? ":0" : ":") + to_string(minutes));
            /*
            string time;
            time += to_string(hour);
            time += ":";
            time += to_string(minutes/10);
            time += to_string(minutes%10);
            times.push_back(time);
            */
 
            return;
        }
        if (places < num)
            return;
        nums(places-1, num, temp, times); 
        temp |= 1 << (places -1);
        nums(places-1,num-1, temp, times);
        temp &= ~(1 << (places -1));
    }
    
};

/*class Solution {
public:
    vector<string> readBinaryWatch(int num) {
    vector<string> rs;
    for (int h = 0; h < 12; h++)
    for (int m = 0; m < 60; m++)
        if (bitset<10>(h << 6 | m).count() == num)
            rs.emplace_back(to_string(h) + (m < 10 ? ":0" : ":") + to_string(m));
    return rs;
}
};*/
