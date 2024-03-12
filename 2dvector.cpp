#include<bits/stdc++.h>
using namespace std;
main()
{
    vector<vector<int> > arr=
    {
        {1,2,3,4},
        {3,4},
        {4,8,4,2,1,1,2,3},
        {2}
    } ;

    for(int i=0;arr.size();i++)
    {
        for(int bappi:arr[i])
        {
            cout<<bappi<<" ";
        }
        cout<<endl;
    }
}