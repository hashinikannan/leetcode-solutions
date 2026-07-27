int maxProfit(int* prices, int pricesSize) {
      int i;
      int min=prices[0];
      int max=0;
      for(i=0;i<pricesSize;i++)
      {
        if(prices[i]<min)
        {
            min=prices[i];
        }
        int profit=prices[i]-min;
        if(profit>max)
        {
            max=profit;
        }
      }
      return max;
}