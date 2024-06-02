#include <bits/stdc++.h>
#define L size()
using namespace std;
int main()
{
    int a,b,c,d,i,j,k,l;
    cout<<"Number of character in the frame"<<'\n';
    cin>>a;
    string s,t;
    cout<<"Enter the frame: ";
    cin>>s;
    cout<<"Enter the requested: ";
    cin>>t;

    int hit=0;
    int miss=0;
    for(i=0; i<t.L; i++)
    {
        for(j=0; j<s.L; j++)
        {
            if(s[j]==t[i])
            {
                break;
            }
        }
        if(j<s.L)
        {
            hit++;
        }
        else
        {
            int maxx=-1;
            int ind;
            for(k=0; k<s.L; k++)
            {
                l=i+1;

                for(l=l; l<t.L; l++)
                {
                    if(s[k]==t[l])
                    {

                        if(l>maxx)
                        {
                            maxx=l;
                            ind=k;

                        }
                        break;
                    }
                }
                if(l==t.L)
                {
                    maxx=7685467985476957;
                    ind=k;
                }
            }
            s[ind]=t[i];
            miss++;
        }
        cout<<"Present cache: " <<s<<'\n';

    }
    cout<<"Total hit is " <<hit<<'\n';
    cout<<"Total miss is "<<miss<<'\n';

}

