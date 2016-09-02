/* Pythonovci [2016] */
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void print( char niz[], int a, int e, int i, int o, int u ) {
int k = 0;
  while(niz[k] != '\0') {
    printf("%c",niz[k]);
    k++; }
    printf ("Broj samoglasnika je:\n a: %d\n e:%d\n i:%d\n o:%d\n u:%d\n", a, e, i, o, u);
}

void broj_samoglasnika( int *a, int *e, int *i, int *o, int *u, int n, char niz[150] ) {
 int k;
 int vowels[5];
  for ( k = 0; k < 5; k++ ) {
    vowels[k] = 0; }
*a = 0;
*e = 0;
*i = 0;
*o = 0;
*u = 0;
  for ( k = 0; niz[k] < n; k++ ) {
    if ( isalpha(niz[k])  == 'a' || isalpha(niz[k]) == 'A' ) {
      vowels[0] += 1; }
    else if ( isalpha(niz[k]) == 'e' || isalpha(niz[k]) == 'E' ) {
      vowels[1] += 1; }
    else if ( isalpha(niz[k]) == 'i' || isalpha(niz[k]) == 'I' ) {
      vowels[2] += 1; }
    else if ( isalpha(niz[k]) == 'o' || isalpha(niz[k]) == 'O' ) {
      vowels[3] += 1; }
    else if ( isalpha(niz[k]) == 'u' || isalpha(niz[k]) == 'U' ) {
      vowels[4] += 1; }

*a = vowels[0];
*e = vowels[1];
*i = vowels[2];
*o = vowels[3];
*u = vowels[4];
}}

int velicina_n( char niz[150], int *n ) {
 *n = strlen ( niz );
}

void unesi( char niz[150] ) {
 printf("Napisi recenicu.\n");
 char *b = niz;
 size_t bufsize = 150;
 getline(&b, &bufsize, stdin);
 
}

int main() {
 int n;
 int a;
 int e;
 int i;
 int o;
 int u;
 char niz[150];

  unesi(niz);
  velicina_n(niz, &n);
  broj_samoglasnika(&a, &e, &i, &o, &u, n, niz);
  print(niz, a, e, i, o, u);
}
