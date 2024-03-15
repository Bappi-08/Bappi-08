#include<bits/stdc++.h>
using namespace std;
vector <int> bappi(vector<int> arr,int sum)
{
    unordered_set<int >q;
    vector<int>answer;
    for(int i=0;i<arr.size();i++)
    {
        int x=sum-arr[i];
        if(q.find(x)!=q.end()){
            answer.push_back(x);
            answer.push_back(arr[i]);
            return answer;
        }
        q.insert(arr[i]);
    }
    return {};
}
int main()
{
    vector<int>arr{10,5,2,3,-6,9,11};
    int s=4;
    auto p=bappi(arr,s);
    if(p.size()==0){
        cout<<"no such a pair";
    }
    else cout<<p[0]<<"  "<<p[1]<<endl;

}