#include <iostream>
#include <cmath>
using namespace std;

int add(int a, int b) { // Funkcija za sobiranje na dva broja
    return a + b;
}

int subtract(int a, int b) {    //Funkcija za odzemanje na dva broja
    return a - b;
}

float divide(int a, int b) {    //Funkcija za delenje na dva broja
    return (float)a / b;
}

double power(int a, int b) {    //Funkcija stepenuvanje na eden broj so drug
    return pow((double)a, (double)b);
}

template<typename T>    //Funkcijata prima dva broja i pokazhuva koj druga funkcija za aritmetichka operacija
T calculate(int a, int b, T (*operation)(int, int)) {
    return operation(a, b);
}

int main() {
    int x = (int)'S', y = (int)'S';
    int (*op1)(int, int);
    op1 = &add;
    int sum = calculate(x, y, op1);
    cout << "Sumata na " << x << " i " << y << " iznesuva " << sum << endl;
    op1 = &subtract;
    int diff = calculate(x, y, op1);
    cout << "Razlikata pomegju " << x << " i " << y << " iznesuva " << diff << endl;

    float (*op2)(int, int);
    op2 = &divide;
    float division = calculate(x, y, op2);
    cout << "Delenjeto pomegju " << x << " i " << y << " iznesua " << division << endl;

    double (*op3)(int, int);
    op3 = &power;
    double pow = calculate(x, y, op3);
    cout << "Stepenuvanjeto na " << x << " so " << y << " e " << pow << endl;

    return 0;
}
