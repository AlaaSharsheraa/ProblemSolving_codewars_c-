/*
DESCRIPTION:
We need a function that can transform a number (integer) into a string.

What ways of achieving this do you know?

Examples (input --> output):
123  --> "123"
999  --> "999"
-100 --> "-100"
*/
#include<iostream>
#include <string>
using namespace std;
std::string number_to_string(int num) {
 std:: string s=std::to_string(num);
  return s;
}
int main(){
    int num;
    cin >> num;
    cout<<number_to_string(num)<<endl;

}