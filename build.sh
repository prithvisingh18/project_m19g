#em++ -s WASM=1 multiply.cpp -o multiply.js
emcc --bind -s WASM=1 -o multiply.js multiply.cpp --js-library multiply_in.js
