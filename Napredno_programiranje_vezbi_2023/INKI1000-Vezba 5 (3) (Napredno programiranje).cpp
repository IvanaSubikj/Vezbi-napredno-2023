#include <iostream>
#include <cmath>
using namespace std;
int add(int i, int s) {
    return i + s;
}
int subtract(int i, int s) {
    return i - s;
}
float divide(float i, float s) {
    return i / s;
}
double exponentiate(double i, double s) {
    return pow(i, s);
}
int calculate(int i, int s, int (*operation)(int, int)) {
    return operation(i, s);
}
float calculate(float i, float s, float (*operation)(float, float)) {
    return operation(i, s);
}
double calculate(double i, double s, double (*operation)(double, double)) {
    return operation(i, s);
}
int main() {
    char firstName = 'I';
    char lastName = 'S';
    int i = int(firstName);
    int s = int(lastName);
    int (*op1)(int, int);
    float (*op2)(float, float);
    double (*op3)(double, double);
    op1 = &add;
    int sum = calculate(i, s, op1);
    cout << "Sum of " << i << " and " << s << " is " << sum << endl;
    op1 = &subtract;
    int diff = calculate(i, s, op1);
    cout << "Difference between " << i << " and " << s << " is " << diff << endl;
    op2 = &divide;
    float div = calculate(i, s, op2);
    cout << "Division of " << i << " and " << s << " is " << div << endl;
    op3 = &exponentiate;
    double exp = calculate(i, s, op3);
    cout << i << " to the power of " << s << " is " << exp << endl;
    return 0;
}
