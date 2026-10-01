#include <emscripten.h>

// This prevents the compiler from optimizing out or deleting your function
extern "C" {
    EMSCRIPTEN_KEEPALIVE 
    int calculate_square(int num) {
        // High-performance computation running natively in the browser layer
        return num * num;
    }
}