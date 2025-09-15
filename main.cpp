#include <iostream>
#include <string>
using namespace std;

u_int64_t temp(u_int64_t x)
{
    u_int64_t a = x * x; // x^2
    u_int64_t b = a * a; // x^4
    u_int64_t c = b * b; // x^8
    u_int64_t d = c * c; // x^16
    u_int64_t f = d * x; 
    return f;
}

int main()
{
    cout << temp(4);
    return 0;
}
