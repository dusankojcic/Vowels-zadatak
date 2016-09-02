/* Copyright [2016] <Pythonovci> */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

main() {
char niz[150];
int n;
int a = 0;
int e = 0;
int i = 0;
int o = 0;
int u = 0;
int k;
printf("Napisi recenicu.\n");
char *b = niz;
size_t bufsize = 150;
getline(&b, &bufsize, stdin);
printf("%s", niz);

n = strlen(niz);
printf("Recenica ima %d karaktera:\n", n);

for (k = 0; k < n; k++) {
  switch(niz[k]) {
    case 'a':
    case 'A':
        a++;
        break;
    case 'e':
    case 'E':
        e++;
        break;
    case 'i':
    case 'I':
        i++;
        break;
    case 'o':
    case 'O':
        o++;
        break;
    case 'u':
    case 'U':
        u++;
        break;
  }
}

printf(" a: %d\n e: %d\n i: %d\n o: %d\n u: %d\n", a, e, i, o, u);

}
