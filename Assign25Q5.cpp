#include<iostream>
using namespace std;
class ReverseNumber
{
  int n,r;
  public:
      void input()
      {
          cout<<"Enter any number";
          cin>>n;
      }
      void show()
      {
          while(n>0)
          {
            r=n%10;
            cout<<r;
            n=n/10;
          }
      }
};
int main()
{
  ReverseNumber obj;
  obj.input();
  obj.show();


}
