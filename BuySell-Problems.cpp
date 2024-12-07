#include <iostream>
using namespace std;

int main()
{
    int prices[] = {9, 8, 7, 11, 2, 3, 4, 5, 16, 7}, bestBuy = prices[0], maxProfit = 0, size = sizeof(prices) / sizeof(prices[0]);
    for (int i = 0; i < size; i++)
    {
        if (prices[i] > bestBuy)
        {
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }
    cout << "The maximum profit is " << maxProfit;
    return 0;
}