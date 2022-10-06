// converting celsius to farenheit
#include <iostream>
using namespace  std;
float temp (float f); //function prototype
float celsius;
int main() {
    float celsius,f;
    cout <<"ABCD"<<endl;
    cin>>f;
    celsius=temp(f); //function calling
    cout<<"the temp is"<<celsius;
    return 0;}
    float temp (float f) { //function definition
    celsius=0.556 * (f-32);
    return celsius;
}