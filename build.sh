#em++ -s WASM=1 multiply.cpp -o multiply.js
emcc --bind -o multiply.js multiply.cpp
