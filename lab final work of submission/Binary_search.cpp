#include<iostream>
using namespace std;
int main()
{
    cout<<"Program for Binary Search..."<<endl;
    cout<<"Enter total number of elements: ";
    int n,i, arr[10], num, first, last, middle;
    cin>>n;
    cout<<"Enter " <<n<< " Elements (in ascending order): ";
    for(i=0; i<n; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to be Search: ";
    cin>>num;
    first = 0;
    last = n-1;
    middle = (first+last)/2;
    while(first <= last)
    {
        if(arr[middle]<num)
            first = middle+1;
        else if(arr[middle]==num)
        {
            cout<<"\nThe number, "<<num<<" is found at Position "<<middle+1;
            break;
        }
        else
            last = middle-1;
        middle = (first+last)/2;
    }
    if(first>last)
        cout<<"\nThe number, "<<num<<" is not found in given Array";
    cout<<endl;
    return 0;
}

