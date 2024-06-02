#include<iostream>
#include<vector>
using namespace std;

int ar[10] = {11, 19, 13, 96, 14, 12, 28, 47};

vector<int>v;

void Partition(int l, int r)
{
        if(l==r)return;

        int mid = (l+r)/2;

        Partition(l,mid);
        Partition(mid+1,r);

        v.clear();

        int i=l, j=mid+1;

        while(i<=mid || j<=r)
        {
                if(i<=mid && j<=r)
                {
                        if(ar[i]<ar[j])
                        {
                                v.push_back(ar[i]);
                                i++;
                        }
                        else
                        {
                                v.push_back(ar[j]);
                                j++;
                        }
                }

                else if(i<=mid)
                {
                        v.push_back(ar[i]);
                        i++;
                }

                else
                {
                        v.push_back(ar[j]);
                        j++;
                }
        }
        for(i=0; i<v.size();i++)
        {
                        ar[i+l]=v[i];
        }
}

int main()
{

        Partition(0,7);
        int i = 0;
        while(i<8)
        {
                cout << ar[i] << " ";
                i++;
        }

        return 0;
}
