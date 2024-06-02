#include<bits/stdc++.h>
using namespace std;
struct Event
{
    int duration;
    int deadline;
    Event() {}
    Event(int _dur, int _dead)
    {
        duration = _dur;
        deadline = _dead;
    }
    void print()
    {
        printf("Duration = %d, Deadline = %d\n",duration,deadline);
    }
};
Event E[100];
bool com(Event a, Event b)
{
    if(a.deadline<b.deadline)
        return true;
    return false;
}

int main()
{
    int N;
    cin>>N;
    for(int i=0; i<N; i++)
    {
        cin>>E[i].duration>>E[i].deadline;
    }
    for(int i=0; i<N; i++)
    {
        E[i].print();
    }
    sort(E,E+N,com);
    cout<<"\n";
    cout<<"After Sorting\n\n";
    for(int i=0;i<N;i++)
    {
        E[i].print();
    }
    int time=0;
    int lateness=0;
    int late;
    for(int i=0; i<N; i++)
    {
        time = time + E[i].duration;
        late = time-E[i].deadline;
        if(late>0)
        {
            lateness = max(lateness,late);
        }
    }
    cout<<"\n";
    cout<<"Required Minimum Maximum Lateness: "<< lateness<<"\n";

    return 0;
}
