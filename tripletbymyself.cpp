#include<bits/stdc++.h>
using namespace std;
vector <vector <int> > bappi(vector<int> arr,int sum)
{   int n=arr.size();
   //mns sort(arr.begin(),arr.end());
    vector<vector<int> >result;
    for(int i=0;i<=n-3;i++)
    {   int new_sum=sum-arr[i];
    unordered_set<int>s;
            for(int j=i+1;j<n;j++)
            {
                int x=new_sum-arr[j];
                    if(s.find(x)!=s.end())
                    {
                        cout<<x<<" "<<arr[j]<<" "<< arr[i]<<endl;
                    }
                    s.insert(arr[j]);
            }
      
    }
    return result;
}


int main()
{
    vector<int> arr{1,2,3,4,5,6,7,8,9,15};
    int s=18;
    bappi(arr,s);

  //  for (auto v:result)
  //  {  for( auto x:v){
  //      cout<<x<<"  ";
  //  }
  //  cout<<endl;
  //  }
}