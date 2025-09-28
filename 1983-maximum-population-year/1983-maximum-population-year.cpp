class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int population[2051] = {0};  
        for (int i = 0; i < logs.size(); i++) {
            int birth = logs[i][0];
            int death = logs[i][1];
            for (int y = birth; y < death; y++) {
                population[y]++;
            }
        }

        int maxPop = 0;
        int ansYear = 1950;
        for (int y = 1950; y <= 2050; y++) {
            if (population[y] > maxPop) {
                maxPop = population[y];
                ansYear = y;
            }
        }

        return ansYear;
    }
};
