// Last updated: 8/7/2026, 7:06:40 PM
class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();

        // Initial penalty: shop closed all day
        int penalty = 0;
        for (char c : customers) {
            if (c == 'Y') penalty++;
        }

        int minPenalty = penalty;
        int bestHour = 0;

        // Try opening hour by hour
        for (int i = 0; i < n; i++) {
            if (customers[i] == 'Y') {
                penalty--;  // served customer, reduce penalty
            } else {
                penalty++;  // open but no customer
            }

            if (penalty < minPenalty) {
                minPenalty = penalty;
                bestHour = i + 1;  // closing happens after this hour
            }
        }

        return bestHour;
    }
};
