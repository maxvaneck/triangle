#include <iostream>
#include "triangle.h"

int main() {

    triang::Triangle triangle{};

    std::cout<<triangle.return_type(90,45,45,30,31,32);

    return 0;
}