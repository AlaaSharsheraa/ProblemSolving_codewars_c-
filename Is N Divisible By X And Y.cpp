/*
DESCRIPTION:
Create a function that checks if a number n is divisible by two numbers x AND y. All inputs are positive, non-zero numbers.

Examples:
1) n =   3, x = 1, y = 3 =>  true because   3 is divisible by 1 and 3
2) n =  12, x = 2, y = 6 =>  true because  12 is divisible by 2 and 6
3) n = 100, x = 5, y = 3 => false because 100 is not divisible by 3
4) n =  12, x = 7, y = 5 => false because  12 is neither divisible by 7 nor 5

*/
#include<iostream>
using namespace std;
void is_divisible(int n , int x, int y){
    if (n&&x&&y!=0){
        if (n%x==0 && n%y==0 ){
        cout <<"true because  "<<n<<" is divisible by "<<x<<" and "<<y;
}
 else if (n%x!=0 && n%y!=0 ) {
     cout <<"false because  "<<n<<" is not divisible by "<<x<<" nor "<<y;

        }
   else if (n%x !=0 ){
     cout <<"false because  "<<n<<" is not divisible by "<<x;

        }
        else {
     cout <<"false because  "<<n<<" is not divisible by "<<y;

        }
    }
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    is_divisible(a,b,c);

}

