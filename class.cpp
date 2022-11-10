#include <iostream>
using namespace std;
class addition
{
    public:
    int a, b, c;
   addition()  {
        a = 22;
        b = 30;
        c = 50;
    }
    int product()
    {
        return a*b*c;
    }
};
int main()
{
    addition add;
    cout << "The product of the integers is: " << add.product();
    return 0;
}