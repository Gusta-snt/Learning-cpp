#include <iostream>

int main() {
    using std::cout;

    int students = 20;

    students++;

    students--;

    students *= 2;

    students /= 2;

    int remainder = students % 3;

    cout << students << '\n';
    cout << remainder << '\n';

    return 0;
}
