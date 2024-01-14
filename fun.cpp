#include <iostream>
using namespace std;
 
 int comp (int x,int y){
    if (x>y) {
        return x;
    }
    else {
        return y;
    }
 }
int main (){
    int a,b=0;
    cout << "Enter your numbers "<< endl;
    cin >> a;
    cout << "Enter your numbers "<< endl;
    cin >> b;
    cout << "The greater numbers is ="<< comp(a,b);
    return 0;
}