#include "maybe.hpp"

#include <iostream>
#include <string>

Maybe<int> getNumber() {
    return (rand() % 5) < 3 ? Just(rand() % 20) : None<int>();

} // Maybe<int> getNumber();

int square(int num) {
    return num * num;

} // int square(int num);

int main(int argc, char* argv[]) {
    srand(time(nullptr));

    for(int i = 0; i < 5; i++) {
        auto num = getNumber();
        std::cout << i << ": " << num << ", " << (num >> square) << std::endl;

    } // for(int i = 0; i < 5; i++);

    /* comment to compile */
    auto num = getNumber();
    std::string q = "qwertt";
    std::cout << (num >> q);

} // int main(int argc, char* argv);
