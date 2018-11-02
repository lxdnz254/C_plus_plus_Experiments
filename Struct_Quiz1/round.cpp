#include <math.h>

double round(double x, int n){
    int d = 0;
    if((x * pow(10, n + 1)) - (floor(x * pow(10, n))) > 4) d = 1;
    x = (floor(x * pow(10, n)) + d) / pow(10, n);
    return x;
}
