#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    typedef map<string,int>maptype;
    maptype popmap;
    popmap.insert(pair<string,int>("MH",10000000));
    popmap.insert(pair<string,int>("TN",9000000));
    popmap.insert(pair<string,int>("GA",900000));
    popmap.insert(pair<string,int>("TS",1343200000));
    popmap.insert(pair<string,int>("AP",6700000));
    popmap.insert(pair<string,int>("TN",294867000));

    maptype :: iterator iter;
    char name[30];
    while(true){
        cout<<"enter state name :";
        cin>>name;
        iter =popmap.find(name);

        if(iter!=popmap.end()){
            cout<<iter->second<<endl;

        }
        else{
            cout<<"not found !";
        }
            char o;
            cout<<"do u wanna continueee??? (Y/N)"<<endl;
            cin>>o;
   if(o=='N'){
                break;

            }
            else if(o=='Y'){
                continue;
            }
    }
}
