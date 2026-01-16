class Solution {
public:
    int mod = 1e9 + 7;

    int maximizeSquareArea(int m, int n,
                           vector<int>& hFences,
                           vector<int>& vFences) {

        hFences.push_back(1);
        hFences.push_back(m);
        vFences.push_back(1);
        vFences.push_back(n);

        sort(hFences.begin(), hFences.end());
        sort(vFences.begin(), vFences.end());

        unordered_map<long long, bool> sh, sv;

        int h = hFences.size();
        int v = vFences.size();

        for (int i = 1; i < h; i++) {
            long long sum = 0;
            for (int j = i; j < h; j++) {
                sum += (hFences[j] - hFences[j - 1]);
                sh[sum] = true;
            }
        }

        for (int i = 1; i < v; i++) {
            long long sum = 0;
            for (int j = i; j < v; j++) {
                sum += (vFences[j] - vFences[j - 1]);
                sv[sum] = true;
            }
        }

        long long ans = 0;
        for (auto &it : sh) {
            long long x = it.first;
            if (sv.count(x)) {
                ans = max(ans, x * x);
            }
        }

        return ans == 0 ? -1 : ans % mod;
    }
};