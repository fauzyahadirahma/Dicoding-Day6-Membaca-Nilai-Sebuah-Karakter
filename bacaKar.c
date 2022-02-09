/* File         : bacaKar.c */
/* Penulis      : Fauzyah Hadirahma, email faubelajar@gmail.com */
/* Deskripsi    : mengenal, memahami, dan mengaplikasi cara memasukkan (input) data bertipe char */

#include <stdio.h>
int main ()
{
    /* KAMUS */
    char cc;
    char c;
    
    /* ALGORITMA */
    printf ("hello\n");
    printf ("baca 1 karakter saja : "); scanf ("%c", &cc);
    printf ("%c\n", cc);
    printf ("baca 1 karakter saja : "); scanf ("%d", &c);
    printf ("%d\n", c);
    
    return 0;
}
