#include <iostream>
using namespace std;

int main()
{
    int prices[] = {9, 8, 7, 11, 2, 3, 4, 5, 16, 7}, sellind = 0, buyind = 0, bestBuy = prices[0], maxProfit1 = 0, size = sizeof(prices) / sizeof(prices[0]);
    for (int i = 0; i < size; i++)
    {
        if (prices[i] - bestBuy > maxProfit1)
        {
            maxProfit1 = max(maxProfit1, prices[i] - bestBuy);
            sellind = i;
        }
    
        if (bestBuy > prices[i])
        {
            bestBuy = min(bestBuy, prices[i]);
            buyind = i;
        }
       
    }
// 

    cout << "The maximum profit is " << maxProfit1 << " and buy index is " << buyind << " and sell index is " << sellind;
    return 0;


}






