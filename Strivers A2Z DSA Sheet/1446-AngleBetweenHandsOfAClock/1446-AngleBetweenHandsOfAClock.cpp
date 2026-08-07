// Last updated: 8/7/2026, 7:08:45 PM
class Solution {
public:
    double angleClock(int hour, int minutes) {
        double angle = abs(30.0 * hour - 5.5 * minutes);
        return min(angle, 360.0 - angle);
    }
};