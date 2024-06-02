#include <bits/stdc++.h>
using namespace std;

void se_sort(int ar[], int n)
{
    int i, j, Min;
    for (i = 0; i < n-1; i++)
    {
        Min = i;
        for (j = i+1; j < n; j++)
        {


            if (ar[j] < ar[Min])
                Min = j;
        if(Min!=i)
            swap(ar[Min], ar[i]);
        }
    }
}
void print(int ar[], int n)
{
    int i;
    for (i=0; i < n; i++)
        cout << ar[i] << " ";
    cout << endl;
}
int main()
{
    int n;
    cout<<"Program for selection Sort..."<<endl;
    cout<<"Enter the number of elements:";
    cin>>n;
    int ar[n];
    cout<<"\nEnter the  elements:";
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    se_sort(ar, n);
    cout << "Sorted array: \n";
    print(ar, n);
    return 0;
}
