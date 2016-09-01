/* Pythonovci [2016] */
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

void print( char niz[], int a, int e, int i, int o, int u ) {
int k = 0;
  while(niz[k] != '\0') {
    printf("%c",niz[k]);
    k++; }
    printf ("Broj samoglasnika je:\n a: %d\n e:%d\n i:%d\n o:%d\n u:%d\n", a, e, i, o, u);
}

void broj_samoglasnika( int *a, int *e, int *i, int *o, int *u, int n, char niz[150] ) {
 int k;
a = 0;
e = 0;
i = 0;
o = 0;
u = 0;
  for ( k = 0; niz[k] != '\o'; k++ ) {
    if ( niz[k]  == 'a' || niz[k] == 'A' ) {
      a++; }}
  for ( k = 0; niz[k] != '\o'; k++ ) {
    if ( niz[k] == 'e' || niz[k] == 'E' ) {
      e++; }}
  for ( k = 0; niz[k] != '\o'; k++ ) {
    if ( niz[k] == 'i' || niz[k] == 'I' ) {
      i++; }}
  for ( k = 0; niz[k] != '\o'; k++ ) {
    if ( niz[k] == 'o' || niz[k] == 'O' ) {
      o++; }}
  for ( k = 0; niz[k] != '\o'; k++ ) {
    if ( niz[k] == 'u' || niz[k] == 'U' ) {
      u++; }}
}

int velicina_n( char niz[150], int *n ) {
 *n = strlen ( niz );
}

void unesi( char niz[150] ) {
int i = 0;
 printf("Napisi recenicu.\n");
 while( (niz[i++]=getchar()) != '\n' && i < 150) {
        ;
     niz[i] = '\0'; }
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
