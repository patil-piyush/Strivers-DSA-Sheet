// Last updated: 9/8/2026, 2:28:52 PM
class Solution {
public:
    int smallestNumber(int n, int t) {
        int pro;
        do{
            int i = n;
            pro = 1;

            while(i > 0){
                pro *= (i % 10);
                i /= 10;
            }

            n++;
        } while(pro % t != 0);

        return n - 1;
    }
};