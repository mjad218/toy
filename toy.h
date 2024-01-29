#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TK_K 3
#define TK_N 4
#define TK_Q 97
#define TK_SQRT_W 33
#define TK_W 22

#define NEG(X) (TK_Q - (X))

void print_bin(int x, int nbits);

void toy_gen(short* A, short* t, short* s);

void toy_enc(const short* A, const short* t, int plain, short* u, short* v);

int toy_dec(const short* s, const short* u, const short* v);