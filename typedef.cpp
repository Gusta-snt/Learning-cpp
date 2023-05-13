#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int >> pairList_t;
typedef std::string text_t;
using number_t = int;

int main(){

    pairList_t pairList;
    text_t name = "Gustavo";
    number_t age = 19;

    std::cout << name << '\n';
    std::cout << age << '\n';

    return 0;
}
