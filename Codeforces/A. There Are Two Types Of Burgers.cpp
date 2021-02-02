#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test, buns, beef, chicken, priceBeef, priceChicken, profit = 0;

    cin>>test;

    while(test--)
    {
        cin>>buns>>beef>>chicken;
        cin>>priceBeef>>priceChicken;

        profit = 0;
        while(buns >= 2 && (beef >=1 || chicken >= 1))
        {
            if(priceBeef > priceChicken)
            {
                if(buns>=2 &&  beef>=1)
                {
                    profit = profit + priceBeef;
                    buns = buns - 2;
                    beef--;
                }
                else if(buns>=2 &&  chicken>=1)
                {
                    profit = profit + priceChicken;
                    buns = buns - 2;
                    chicken--;
                }
            }
            else
            {
                if(buns>=2 &&  chicken>=1)
                {
                    profit = profit + priceChicken;
                    buns = buns - 2;
                    chicken--;
                }
                else if(buns>=2 &&  beef>=1)
                {
                    profit = profit + priceBeef;
                    buns = buns - 2;
                    beef--;
                }
            }
        }
        cout<<profit<<endl;
    }

    return 0;
}
