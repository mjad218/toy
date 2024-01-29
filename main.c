#include "toy.c"

int main(int argc, char **argv)
{
    short A[TK_K * TK_K * TK_N], t[TK_K * TK_N];
    short s[TK_K * TK_N];
    toy_gen(A, t, s);
    for (int msg = 0; msg < 16; ++msg)
    {
        short u[TK_K * TK_N], v[TK_N];
        toy_enc(A, t, msg, u, v);
        short m2 = toy_dec(s, u, v);
        printf("%2d  %2d  ", msg, m2);
        print_bin(msg, TK_N);
        printf("  ");
        print_bin(m2, TK_N);
        printf("  ");
        print_bin(msg ^ m2, TK_N);
        printf("\n");
    }
    printf("Done.\n");
    return 0;
}