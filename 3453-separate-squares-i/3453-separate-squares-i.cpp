class Solution {
public:
    bool check(long double y, vector<vector<int>>& squares, long double totalArea) {

        long double part2 = 0;

        for (auto &i : squares) {

            double Y = i[1];
            long double side =i[2];

            if (Y >= y) {

            } else {
                double finalY = Y + i[2];

                if (finalY <= y) {
                    part2 += side*side;
                } else {

                    part2 += (y - Y) *side;
                }
            }
        }

        return part2 < totalArea / 2;
    }
    double separateSquares(vector<vector<int>>& squares) {

       long double low = 0;
       long double high = 0;

        double ans = 1e9;

        long double totalArea = 0;
        for (auto &i : squares) {
            double y = i[1];
           long double side = i[2];
            totalArea += side*side;
            high = max(high, y + side);
        }

        int count = 0;

        while (high - low >= 1e-6 && count < 60) {
            long double mid = (low + high) / 2;
            count++;
            if (check(mid, squares, totalArea)) {
                low = mid;

                ans = mid;
            } else {
                high = mid;
            }
        }

        return low;
    }
};