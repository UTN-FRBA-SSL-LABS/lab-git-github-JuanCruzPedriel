#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

// Se agrega const a los parámetros porque no se modifican dentro de la función, lo que mejora su legibilidad.
int sumar(const int a, const int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
/*Dados dos enteros a y b devuelve su multiplicacion*/
int multiplicar(int a, int b) {
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0; /* version main */
}
