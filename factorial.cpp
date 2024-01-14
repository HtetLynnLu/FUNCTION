#include <iostream>
using namespace std;

    int factorial(int n) {
        int result=1;
        for (int i =1; i<=n; i++){
            result*=i;
        }
        return result;
    }
int main (){
    int x=0;
    cout << "Enter your numbers :";
    cin >> x;
 int result = factorial(x);
cout << "factorial of " << x << " is "<< result; '\n';
return 0;
}
