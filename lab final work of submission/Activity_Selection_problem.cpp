#include<bits/stdc++.h>
using namespace std;
#define L '\n'
struct Event
{
    int start_time;
    int finish_time;
    Event() {}
    Event(int _time,int _finish)
    {
        start_time= _time;
        finish_time= _finish;
    }
    void print()
    {
        printf("start = %d, finish = %d\n",start_time,finish_time);
    }
};
Event event[1000];
bool com(Event a,Event b)
{
    if(a.finish_time<b.finish_time) return true;
    else return false;

}
int main()
{
    int N;
    cin>>N;
    for(int i=0; i<N; i++)
    {
        cin>>event[i].start_time>>event[i].finish_time;
    }
    cout<<"Before Sorting: "<<L;
    for(int i=0; i<N; i++)
    {
        event[i].print();
    }
    sort(event,event+N,com);

    cout<<"After Sorting: "<<L;

    for(int i=0; i<N; i++)
    {
        event[i].print();
    }
    vector<Event>activity;
    for(int i=0; i<N; i++)
    {
        bool flag=true;
        for(int j=0; j<activity.size(); j++)
        {
            if(event[i].start_time>=activity[j].finish_time||activity[j].start_time>=event[i].finish_time)
            {
                continue;
            }
            else
            {
                flag=false;
                break;
            }
        }
        if(flag==true)
        {
            activity.push_back(event[i]);
        }
    }
    cout<<"Number of Selected Activity: "<<activity.size()<<L;
    cout<<"Selected Activities are: "<<L;
    for(int i=0; i<activity.size(); i++)
    {
        cout<<activity[i].start_time<<" "<<activity[i].finish_time<<L;
    }
    return 0;
}
