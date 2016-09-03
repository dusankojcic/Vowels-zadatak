/* Copyright [2016] <Pythonovci> */
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void print(char niz[], int a, int e, int i, int o, int u, int n) {
puts(niz);
printf("Recenica ima %d karaktera:\n\n", n);
printf ("Broj samoglasnika je:\n a: %d\n e: %d\n"
        " i: %d\n o: %d\n u: %d\n", a, e, i, o, u);
}

void broj_samoglasnika(int *a, int *e, int *i, int *o, int *u, int n, char niz[]) {
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

void unesi_samoglasnike(int a, int e, int i, int o, int u, char vowels[]) {
  int k;
      vowels[0] = a;
      vowels[1] = e;
      vowels[2] = i;
      vowels[3] = o;
      vowels[4] = u;

  printf ("Broj samoglasnika je:\n a: %d\n e: %d\n"
          " i: %d\n o: %d\n u: %d\n", vowels[0], vowels[1], vowels[2], vowels[3], vowels[4]);
}

int velicina_n(char niz[], int *n) {
*n = strlen (niz);
return *n;
}

void unesi(char niz[]) {
printf("Napisi recenicu.\n");
char *b = niz;
size_t bufsize = 150;
getline(&b, &bufsize, stdin);
}

main() {
char niz[150];
char vowels[5];
int n;
int a = 0;
int e = 0;
int i = 0;
int o = 0;
int u = 0;
unesi(niz);
velicina_n(niz, &n);
broj_samoglasnika(&a, &e, &i, &o, &u, n, niz);
unesi_samoglasnike(a, e, i, o, u, vowels);
print(niz, a, e, i, o, u, n);
}
