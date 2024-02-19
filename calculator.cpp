#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    char sign;
    float a, b, res;
    int reboot_count;
    reboot_count = 0;
    string res_text = "Answer is ";
    while (true) {
        if (reboot_count == 0) {cout << "Write a sign:";}
        else {cout << "\nWrite a sign:";}
        cin >> sign;
        cout << "Write first number:";
        cin >> a;
        cout << "Write second number:";
        cin >> b;
        if (sign == '+') {
            res = a + b;
            cout << res_text << res << "\n";
            reboot_count += 1;
        } else if (sign == '-') {
            res = a - b;
            cout << res_text << res << "\n";
            reboot_count += 1;
        } else if (sign == '/') {
            res = a / b;
            cout << res_text << res << "\n";
            reboot_count += 1;
        } else if (sign == '*') {
            res = a * b;
            cout << res_text << res << "\n";
            reboot_count += 1;
        } else {
            cout << "Enter a correct sign!";
            reboot_count += 1;
        }
    }
}
