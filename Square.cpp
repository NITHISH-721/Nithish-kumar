#include <iostream>
#include <cmath>
using namespace std;

class numberprocessor {
private:
    int n;
public:
    void input() {
        cout << "Enter the value of n: ";
        cin >> n;
    }

    void displayResult() {
        cout << "\nResult from 1 to " << n << "\n";
        for(int i = 1; i <= n; i++) {
            if(i % 2 == 0) {
                cout << "Even: " << i << "^3 = " << pow(i, 3) << endl;
            } else {
                cout << "Odd: " << i << "^2 = " << pow(i, 2) << endl;
            }
        }
    }
};

int main() {
    numberprocessor obj;
    obj.input();
    obj.displayResult();
    return 0;
}
