#include<bits/stdtr1c++.h>
using namespace std;
main()
{
    vector<int> arr;
    cout<<arr.size()<<endl;
    arr={1,2,3,4,5,6};
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    arr.push_back(12);
       cout<<arr.size()<<endl;
        cout<<arr.capacity()<<endl;
        arr.pop_back();
        arr.pop_back();
        for(int i=0;i<arr.size();i++)
        {
            cout<<arr[i]<<endl;
        }

        //fill constructor
        vector<int>musa(6,3);
            for(int i=0;i<musa.size();i++)
        {
            cout<<musa[i]<<endl;
        }

    return 0;
}