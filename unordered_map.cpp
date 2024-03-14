#include<bits/stdc++.h>
using namespace std;
main()
{
    unordered_map<string,int> menu;
    menu["maggi"]=12;
    menu["pepsi"]=34;
    menu["babana"]=23;
    menu["cocunut"]=12;
    menu["pizza"]=45;
    menu["khacchoi"]=34;
    menu["pepsi"]=(1+.1)*menu["pepsi"];
    menu.erase("maggi");
    cout<<menu["babana"]<<endl;
    string item;
    cin>>item;
    if(menu.count(item)==0){
        cout<<item<<"is not availablke";

    }
    else {
        cout<<item<<"is availabkle cosrt is  "<<menu[item]<<endl;
    }
    for (pair<string,int> x:menu)
    {
        cout<<x.first<<" price hocche "<<x.second<<endl;
        cout<<endl;
    }
   return 0;
}