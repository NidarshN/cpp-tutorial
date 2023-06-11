#include <iostream>

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main(){
    using namespace first;
    std::cout << "First Namespace x: "<< x << "\n";
    std::cout << "Second Namespace x: "<< second::x << "\n";

    int x = 0;
    std::cout << "This Namespace x: "<< x << "\n";


    return 0;
}