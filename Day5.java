class Solution {
    public int maxProfit(int[] prices) {
        int n = prices.length;
        int profit = 0;

        if (n > 0) {

            int lMin = prices[0], lMax = 0;
            int i = 0;

            while (true) {
                while (i < n - 1 && lMin >= prices[i + 1]) {
                    lMin = prices[++i];
                }

                while (i < n - 1 && lMax <= prices[i + 1]) {
                    lMax = prices[++i];
                }

                if (i < n && lMax - lMin > 0) {
                    profit += lMax - lMin;
                    if (i < n - 1) lMin = prices[++i];
                    lMax = 0;
                }

                if (i == n - 1) break;
            }
        }
        return profit;

    }
}