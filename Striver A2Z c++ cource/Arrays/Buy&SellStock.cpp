#include<bits/stdc++.h>
using namespace std;
 
 int maxProfit(vector<int>& prices) {
        int buy=prices[0], profit=0;

        for(int i=1;i<prices.size();i++){
            if(prices[i]<buy){
                buy=prices[i];
            }
            if((prices[i]-buy)>profit){
                profit=prices[i]-buy;
            }
        }
            return profit;
        
    }

    int main(){
        return 0;
    }