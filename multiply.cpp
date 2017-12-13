#include<iostream>
#include<emscripten/bind.h>
extern "C" {
  extern int multiply_in_js(int x, int y);
}

int multiply(int x, int y)

{
    return multiply_in_js(x,y);


}

EMSCRIPTEN_BINDINGS(my_module) {
    emscripten::function("multiply", &multiply);
}
