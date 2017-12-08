#include<iostream>
#include<emscripten/bind.h>

int multiply(int x, int y)

{
    std::cout << "Hello" << '\n';
    return x * y;

}

EMSCRIPTEN_BINDINGS(my_module) {
    emscripten::function("multiply", &multiply);
}
