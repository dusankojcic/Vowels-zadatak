/* Copyright [2016] <Pythonovci> */
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct memory {
   char recenica[150];
   char vowels[5];
 };
struct memory history[5];

void memorisi(char recenica[], struct memory history[], int choice, int k) {
  if (choice == 1) {
  strcpy( history[k].recenica, recenica ); }
  if (k > 4) {
  strcpy( history[0].recenica, history[1].recenica );
  strcpy( history[1].recenica, history[2].recenica );
  strcpy( history[2].recenica, history[3].recenica );
  strcpy( history[3].recenica, history[4].recenica );
  strcpy( history[4].recenica, recenica ); }
}

void istorija(char recenica[], struct memory history[]) {
  int k;
  for ( k = 0; k < 5; k++ ) {
  printf( "Recenica %d glasi: %s\n", k + 1, history[k].recenica); }
}

void istorija_posebno(struct memory history[], int broj2) {
  int k;
  k = broj2;
  printf("%s", history[k-1].recenica);
}

void print_recenica(char recenica[]) {
  puts(recenica);
}

void print_samoglasnici(int a, int e, int i, int o, int u) {
  printf ("Broj samoglasnika je:\n a: %d\n e: %d\n"
          " i: %d\n o: %d\n u: %d\n", a, e, i, o, u);
}

void print_karakteri(int n) {
  printf("Recenica ima %d karaktera:\n\n", n);
}

void reset_samoglasnika(int *a, int *e, int *i, int *o, int *u, char vowels[]) {
  *a = 0;
  *e = 0;
  *i = 0;
  *o = 0;
  *u = 0;
    vowels[0] = *a;
    vowels[1] = *e;
    vowels[2] = *i;
    vowels[3] = *o;
    vowels[4] = *u;
}

void broj_samoglasnika(int *a, int *e, int *i, int *o, int *u, int n, char recenica[]) {
int k;
  for (k = 0; k < n; k++) {
    switch(recenica[k]) {
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
  vowels[0] = a;
  vowels[1] = e;
  vowels[2] = i;
  vowels[3] = o;
  vowels[4] = u;
}

int velicina_n(char recenica[], int *n) {
  *n = strlen (recenica);
  return *n;
}

char unesi(char recenica[]) {
  char *buffer = recenica;
  size_t bufsize = 150;
  getline(&buffer, &bufsize, stdin);
}

int main_menu(int *choice) {
  printf("\nMain menu\n");
  printf("1 - Napisi recenicu.\n");
  printf("2 - Prikazi recenicu.\n");
  printf("3 - Prikazi broj samoglasnika.\n");
  printf("4 - Prikazi broj karaktera.\n");
  printf("5 - Prikazi istoriju.\n");
  printf("6 - Exit.\n\n");
  scanf("%d", &*choice);
  return *choice;
}

int izbor(int *broj) {
  scanf("%d", &*broj);
  return *broj;
}

int izbor2(int *broj2) {
  scanf("%d", &*broj2);
  return *broj2;
}

main() {
  char recenica[150];
  char vowels[5];
  char unwantedchar[40];
  unwantedchar[0] = 0;
  int n;
  int a = 0;
  int e = 0;
  int i = 0;
  int o = 0;
  int u = 0;
  int k = 0;
  int choice;
  int broj;
  int broj2;

    while (choice != 6) {
      main_menu(&choice);
      fgets(unwantedchar, 40, stdin);
      if (isalpha(unwantedchar[0]) == 0) {
    switch (choice) {
      case 1:
        reset_samoglasnika(&a, &e, &i, &o, &u, vowels);
        printf("\nNapisi recenicu.\n\n");
        unesi(recenica);
        velicina_n(recenica, &n);
        broj_samoglasnika(&a, &e, &i, &o, &u, n, recenica);
        unesi_samoglasnike(a, e, i, o, u, vowels);
        memorisi(recenica, history, choice, k);
        k++;
      break;
      case 2:
        printf("Vasa recenica je:\n");
        print_recenica(recenica);
        break;
      case 3:
        print_samoglasnici(a, e, i, o, u);
        break;
      case 4:
        print_karakteri(n);
        break;
      case 5:
      do {
      printf("1 - Celokupna istorja.\n");
      printf("2 - Recenice posebno.\n");
      printf("3 - Exit.\n\n");
      izbor(&broj);
      fgets(unwantedchar, 40, stdin);
        if (isalpha(unwantedchar[0]) == 0) {
          switch (broj) {
            case 1:
              istorija(recenica, history);
              break;

            case 2:
              do {
              printf("1 - Recenica broj 1.\n");
              printf("2 - Recenica broj 2.\n");
              printf("3 - Recenica broj 3.\n");
              printf("4 - Recenica broj 4.\n");
              printf("5 - Recenica broj 5.\n");
              printf("6 - Exit.\n\n");
              izbor2(&broj2);
              fgets(unwantedchar, 40, stdin);
              if (isalpha(unwantedchar[0]) == 0) {
                switch (broj2) {
                  case 1:
                    istorija_posebno(history, broj2);
                    break;
                  case 2:
                    istorija_posebno(history, broj2);
                    break;
                  case 3:
                    istorija_posebno(history, broj2);
                    break;
                  case 4:
                    istorija_posebno(history, broj2);
                    break;
                  case 5:
                    istorija_posebno(history, broj2);
                    break;
                  case 6:
                    break;
                  default:
                  printf("Pogresan unos.\n");
                  printf("Pokusaj ponovo.\n\n");
                }
              }
            } while (broj2 != 6);
              break;

            case 3:
            default:
            printf("Pogresan unos.\n");
            printf("Pokusaj ponovo.\n\n");
          }
        }
      } while (broj != 3);
        break;
      case 6:
        return 0;
      default:
        printf("Pogresan unos.\n");
        printf("Pokusaj ponovo.\n\n");
      }
    }
  }
}
