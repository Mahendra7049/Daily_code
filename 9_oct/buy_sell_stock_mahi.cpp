int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mini=INT_MAX;
        int max=0;
        int k=0;
        for(int i=0;i<n;i++){
            if(prices[i]<mini)
            mini=prices[i];

            k=prices[i]-mini;
            if(k>max)
            max=k;
        }
        return max;
    }
