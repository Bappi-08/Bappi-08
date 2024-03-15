#include<bits/stdc++.h>
using namespace std;
void bappi(vector<int>arr,int sum){
unordered_set<int> s;
for (int i=0;i<arr.size();i++)
{
    int x=sum-arr[i];
    if(s.find(x)!=s.end()){
        cout<<x<<" "<<arr[i]<<endl;
    }
    s.insert(arr[i]);
}
}
main()
{   vector<int> arr{10,5,2,3,-6,9,11,10};
    int s=4;
    bappi(arr,s);

}