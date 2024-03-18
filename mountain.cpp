#include<bits/stdc++.h>
using namespace std;
main()
{
    cout<<"bappi"<<endl;
    vector<int> arr{5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
    int n=arr.size();
    cout<<n<<endl;
   int  cnt=1;
    for(int i=1;i<n-1;)
    {
      if ((arr[i] > arr[i - 1]) && (arr[i] > arr[i + 1])) {
            cout<<"bappi"<<endl;
        {
            int j=i;
             while (arr[j]>arr[j-1] && (j>0))
            {   cnt++;
                j--;
            }
            while (arr[j]>arr[j+1] && (j<n-1) )
            {
                cnt++;
                j++;
            }
        }
    }
    else {
                i++;}
                i++;
}
cout<<"bappi"<<endl;
cout<<cnt<<endl;
}
