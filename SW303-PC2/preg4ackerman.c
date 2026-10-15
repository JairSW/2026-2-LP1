#include <stdio.h>
int ackermann(int m, int n);

int main() {
    int res;
    res = ackermann(3, 4);
    printf("El resultado es: %d\n", res);
    return 0;
}

int ackermann(int m, int n) {
    // Primer caso
    if (m == 0) {
        return n + 1;
    }
    // Segundo caso
    if (m > 0 && n == 0) {
        return ackermann(m - 1, 1);
    }
    // Tercer caso
    if (m > 0 && n > 0) {
        int valor;
        valor = ackermann(m, n - 1);
        return ackermann(m - 1, valor);
    }

    return 0;
}