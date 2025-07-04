class Solution {
public:
    int fib(int n) {
        // Initialize the first two fibonacci numbers
        int previous = 0, current = 1;
      
        // Loop to calculate the nth fibonacci number
        while (n--) {
            // Calculate the next fibonacci number
            int next = previous + current;
          
            // Update the previous and current values for the next iteration
            previous = current;
            current = next;
        }
      
        // Return the nth fibonacci number which is now stored in 'previous'
        return previous;
    }
};