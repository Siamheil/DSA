class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        int floor = -1, ceil = -1;
        for(int num : arr) {
            if(num <= x) {
                if(floor == -1 || num > floor)
                    floor = num;
            }
            if(num >= x) {
                if(ceil == -1 || num < ceil)
                    ceil = num;
            }
        }
        return {floor, ceil};
    }
};