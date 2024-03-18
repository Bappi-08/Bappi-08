#include<bits/stdc++.h>
using namespace std;
main()
{

    vector<int>arr{1,9,3,0,18,5,2,4,10,7,12,6,31,32,33,34,35,36,37,38,39,40,41,42};
    vector<int>bb;
        sort(arr.begin(),arr.end());
        int siz =1;
        int n=arr.size();
   // cout<<arr[6]<<endl;
   for(int i=1;i<n-1;i++)
   {

       if (arr[i+1]==(arr[i]+1))
       {
           siz=siz+1;
       }
       else {
        bb.push_back(siz);
        siz=1;
       }
   }
    bb.push_back(siz);
   int answer=0;
   for(auto x:bb)
   {
       if (x>answer)
            answer=x;
   }
   cout<<answer;


}
                                            h