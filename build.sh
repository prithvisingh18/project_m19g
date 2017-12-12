#em++ -s WASM=1 multiply.cpp -o multiply.js
emcc --bind --js-library multiply_in.js -o multiply.js multiply.cpp
