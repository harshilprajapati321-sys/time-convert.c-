#include<iostream>
using namespace std;

class timeconverter{
    public:
            int totalsecond;
            int hr;
            int min;
            int remsecond;
            int second;

            void showdetail(){
                cout<<hr<<":"<<min<<":"<<second<<endl;
            }
};
int main(){
    timeconverter t1;
    cout<<"enter the totalsecond:"<<endl;
    cin>>t1.totalsecond;
    t1.hr=t1.totalsecond/3600;
    t1.remsecond=t1.totalsecond%3600;
    t1.min=t1.remsecond/60;
    t1.second=t1.remsecond%60;
    t1.showdetail();
    return 0;

}