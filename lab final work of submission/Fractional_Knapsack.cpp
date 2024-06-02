#include <bits/stdc++.h>
using namespace std;
struct Item{
double weight;
double value;
double per;
};
Item item[100];
bool com(Item a,Item b)
{
    return (a.per<b.per);
}
int main()
{
   int b,d;
   double a;
   cout<<"Enter the Knapsack capacity: "<<"\n";
   cin>>a;
   cout<<"Enter total number of items: "<<"\n";
   cin>>b;
   for(int i=0;i<b;i++)
   {
       cout<<"Enter the weight of the  item no "<<i+1<<" : "<<"\n";
       cin>>item[i].weight;
       cout<<"Enter the profit: "<<'\n';
       cin>>item[i].value;
       cout<<"The profit per unit is: "<<(item[i].value/item[i].weight)<<"\n";
       item[i].per=(item[i].value/item[i].weight);
   }
   sort(item,item+b,com);
   int profit=0;
   for(int i=b-1;i>=0;i--)
   {
       d=min(a,item[i].weight);
       profit+=(d*item[i].per);
       a-=d;
       if(a<=0)
       {
           break;
       }
   }
   cout<<" Total Profit = "<<profit<<"\n";
   return 0;
}
