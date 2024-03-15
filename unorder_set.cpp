#include<bits/stdc++.h>
using namespace std;
main()
{
    unordered_set<int>s{1,3,45,3,2,5,6,4,3};
    s.insert(23);
    s.erase(2);
    int key;
    cin>>key;
    if (s.find(key)!=s.end())
    {
        cout<<key<<"is present";
    }
    for (auto x: s)
    {
        cout<<x<<endl;
    }
}