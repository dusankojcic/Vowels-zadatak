/* Copyright [2016] <Pythonovci> */
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void print(char niz[150], int a, int e, int i, int o, int u, int n) {
puts(niz);
printf("Recenica ima %d karaktera:\n\n", n);
printf ("Broj samoglasnika je:\n a: %d\n e: %d\n"
        " i: %d\n o: %d\n u: %d\n", a, e, i, o, u);
}
void broj_samoglasnika(int *a, int *e, int *i, int *o, int *u, int n, char niz[150]) {
int k;
  for (k = 0; k < n; k++) {
    switch(niz[k]) {
      case 'a':
      case 'A':
          (*a)++;
          break;
      case 'e':
      case 'E':
          (*e)++;
          break;
      case 'i':
      case 'I':
          (*i)++;
          break;
      case 'o':
      case 'O':
          (*o)++;
          break;
      case 'u':
      case 'U':
          (*u)++;
          break;
    }
  }
}
int velicina_n(char niz[150], int *n) {
*n = strlen (niz);
return *n;
}
void unesi(char niz[150]) {
printf("Napisi recenicu.\n");
char *b = niz;
size_t bufsize = 150;
getline(&b, &bufsize, stdin);
}
main() {
char niz[150];
int n;
int a = 0;
int e = 0;
int i = 0;
int o = 0;
int u = 0;
unesi(niz);
velicina_n(niz, &n);
broj_samoglasnika(&a, &e, &i, &o, &u, n, niz);
print(niz, a, e, i, o, u, n);
}
