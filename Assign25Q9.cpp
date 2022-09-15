#include<iostream>
using namespace std;
class circle
{
  float r,area;
  public:
      void circles()
      {
          cout<<"Enter radius of circle:";
          cin>>r;
          area=3.14*r*r;
          cout<<"area:"<<area;
      }
};
int main()
{
    circle obj;
    obj.circles();
}
