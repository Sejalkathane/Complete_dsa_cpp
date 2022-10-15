#include <iostream>
using namespace std;
// Efficent solution
//  int maxprofit(int price[],int n)
//  {
//      int profit=0;
//      for(int i=1;i<n;i++)
//         if(price[i]>price[i-1])
//            profit+= (price[i]-price[i-1]);

//     return profit;
// }




int maxprofit(int price[], int n)
{
  int profit = 0;

  for (int i = 0; i < n; i++)
  {
    if (price[i] > price[i - 1])
    {
      profit = profit + (price[i] - price[i - 1]);
    }
  }
  return profit;
}

int main()
{
  // int price[]={1,2,3,4,1,2,3},n=7;
  int price[] = {1, 5, 3, 8, 12}, n = 5;
  cout << maxprofit(price, n);
  return 0;
}
