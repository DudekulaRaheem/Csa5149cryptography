#include <stdio.h>
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int modInverse(int e, int phi) {
    int m0 = phi, t, q;
    int x0 = 0, x1 = 1;
    if (phi == 1)
        return 0;
    while (e > 1) {
        q = e / phi;
        t = phi;
        phi = e % phi;
        e = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }
    if (x1 < 0)
        x1 += m0;
    return x1;
}
int main() {
    int n = 3599;
    int e = 31;
    int common_factor = 59; 
    int p = common_factor;
    int q = n / p;
    int phi = (p - 1) * (q - 1);
    int d = modInverse(e, phi);
    printf("Factors of n: p = %d, q = %d\n", p, q);
    printf("The private key d is: %d\n", d);
    return 0;
}

