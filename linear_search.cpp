#include<iostream>
using namespace std;

int main()
{
    int a[]={1,2,3,4,5};
    int target=4;

    for(int i=0;i<5;i++)
    {
        if(a[i]==target)
        {
            cout<<"Element found at index: "<<i;
            return 0;
        }
    }

    cout<<"Element not found";

    return 0;
}
