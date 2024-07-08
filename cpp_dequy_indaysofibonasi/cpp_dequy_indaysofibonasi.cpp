/**
 * Tinh day so Fibonacci bang phuong phap de quy
 *
 * @author viettuts.vn
 */

#include <iostream>

using namespace std;

/**
 * Tinh so Fibonacci thu n
 *
 * @param n: chi so cua so Fibonacci tinh tu 0
 *           vd: F0 = 0, F1 = 1, F2 = 1, F3 = 2, F4 = 3, F5 = 5
 * @return So Fibonacci thu n
 */
int fibonacci(int n) {
    if (n < 0) {
        return -1;
    }
    else if (n == 0 || n == 1) {
        return n;
    }
    else {
        return fibonacci(n - 1)  + fibonacci(n - 2);
    }
}

/**
 * Ham main
 */
int main() {
    cout << "10 so dau tien cua day so Fibonacci: \n";
    for (int i = 0; i < 10; i++) {
        cout << fibonacci(i) << " ";
    }
}