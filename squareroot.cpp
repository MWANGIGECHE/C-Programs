// A c++ program to determine the squareroot of a  number
#include <iostream>
#include <cmath>
using namespace std;
float answer(int num); //function prototype 
int main() {
    int num;
    float answer;
    answer=sqrt(num); //function calling
    cout <<"enter num"<<endl;
    cin>>num;
    cout<<"the answer is"<<sqrt(num)<<endl;
    return 0;
    }
    float answer(int num){ //function definition 
float answer;
    answer=sqrt(num);
    return answer;
}
