// creating a class addition
#include <iostream>
using namespace std;
class addition
{
    public:
    int a, b, c,ans;
   addition()  {
        a = 22;
        b = 30;
        c = 50;
   }
    int product ();
    {
    ans=(a*b*c);
        return ans;
    }
};
int main()
{
    addition add;
    int a,b,c;
    int ans;
    add.a=22;
    add.b=30;
    add.c=50;
    ans=add.product();
    {
cout << "The product of the integers is: " <<ans;
}
    return 0;
}