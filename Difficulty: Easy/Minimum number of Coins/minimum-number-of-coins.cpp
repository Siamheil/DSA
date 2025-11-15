class Solution {
  public:
    int findMin(int n) {
        int currency[] = {10, 5, 2, 1};
        int coins = 0, i = 0;
        while (n > 0) {
            coins += n / currency[i];    
            n = n % currency[i];         
            i++;
        }
        return coins;
    }
};