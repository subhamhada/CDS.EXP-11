//subham
//23070123132
//entc-B2
//experiment-11
#include<iostream>
using namespace std;
class cube
{
   public:
   double height=2.0;
   double width=3.0;
   double length=4.0;
};

int main()
{
    cube c1;
    double vol=c1.height*c1.width*c1.length;
    cout<<"volume:"<<vol<<endl;
}