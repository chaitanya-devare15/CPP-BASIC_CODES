#include <iostream>
using namespace std;
int product(int a, int b){
    if (b == 0){
        return 0;
    }
    return a + product(a, b - 1);
}

int main(){
    int number1, number2;

    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;

    int prod = product(number1, number2);
    cout << "The product of " << number1 << " and " << number2 << " is " << prod << endl;

    return 0;
}

