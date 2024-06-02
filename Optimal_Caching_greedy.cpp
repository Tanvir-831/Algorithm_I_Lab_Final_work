#include <bits/stdc++.h>
#define M size()
using namespace std;
int main()
{
    int n,b,c,d,i,j,k,l,p;
    cout<<"Total number of characters in the frame"<<'\n';
    cin>>n;
    string current,req_list;
    cout<<"Enter the frame: ";
    cin>>current;
    cout<<"Enter the requested sequence: ";
    cin>>req_list;

    int hit=0;
    int miss=0;
    for(i=0; i<req_list.M; i++)
    {
        for(j=0; j<current.M; j++)
        {
            if(current[j]==req_list[i])
            {
                break;
            }
        }
        if(j<current.M)
        {
            hit++;
        }
        else
        {
            int m=-1;
            int q;
            for(k=0; k<current.M; k++)
            {
                p=i+1;

                for(p=p; p<req_list.M; p++)
                {
                    if(current[k]==req_list[p])
                    {

                        if(p>m)
                        {
                            m=p;
                            q=k;

                        }
                        break;
                    }
                }
                if(p==req_list.M)
                {
                    m=1000;
                    q=k;
                }
            }
            current[q]=req_list[i];
            miss++;
        }
        cout<<"Present cache: " <<current<<'\n';

    }
    cout<<"Minimum number of cache miss: "<<miss<<"\n";
    cout<<"Total hit is: " <<hit<<"\n";
}
