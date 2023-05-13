#include <iostream>

namespace first {
    int x = 1;
}

int main() {
    using std::cout;
    using std::string;
    using std::cin;

    int x = 0;

    cout << x << '\n';
    cout << first::x << '\n';

    return 0;
}
