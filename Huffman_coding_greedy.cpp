#include<bits/stdc++.h>
using namespace std;
map<pair<int,string>,int>M;
vector<int>G[100];
pair<int,string>Node[100];
priority_queue<pair<int,string>,vector<pair<int,string>>, greater<pair<int,string>>>PQ;
void rec(int u, string codeword)
{
    if(G[u].size()>0)
    {
        rec(G[u][0],codeword+"0");
        rec(G[u][1],codeword+"1");
    }
    else
    {
          cout<<Node[u].second<<": Length = "<<codeword.size()<<" Codeword = "<<codeword<<"\n";
    }
}
int main()
{
    int N;
    cout<<"Input the total number of characters: ";
    cin>>N;
    cout<<"Enter those character and their associate frequency: "<<"\n";
    for(int i=1; i<=N; i++)
    {
        int a;
        string chr;
        cin>>chr>>a;
        pair<int, string>Pair=make_pair(a,chr);
        M[Pair]=i;
        Node[i]=Pair;
        PQ.push(Pair);
    }
    int cnt = PQ.size();
    while(PQ.size()>1)
    {
        pair<int, string>x,y,z;
        x = PQ.top();
        PQ.pop();
        y = PQ.top();
        PQ.pop();
        z.first = x.first+y.first;
        z.second = x.second+y.second;
        PQ.push(z);
        cnt++;
        M[z] = cnt;
        Node[cnt] = z;
        G[cnt].push_back(M[x]);
        G[cnt].push_back(M[y]);
    }
    int r = M[PQ.top()];
    PQ.pop();
    rec(r,"");
    return 0;
}

