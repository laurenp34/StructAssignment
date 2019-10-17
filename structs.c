#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "structs.h"

// Create a struct that has at least 2 data members, one must be a string.
//     You can provide struct prototypes outside of functions.
//     Don't just combine random things, make it meaningful (like food and price, athlete and associated statistic, Pokemon and something about Pokemon ..)

// Write a function that returns an example of your struct when run.
//     This should not return the same values every time.


struct shoes createExample() {

  //initialize random generator:
  // srand(time(NULL));

  struct shoes out;

  //array of 10 names
  char (*celebs[100])[10];
  celebs[0] = "Obama";
  celebs[1] = "John Lennon";
  celebs[2] = "Serena Williams";
  celebs[3] = "Frank Sinatra";
  celebs[4] = "Katy Perry";
  celebs[5] = "Robin Williams";
  celebs[6] = "Steve Carrell";
  celebs[7] = "Bill Gates";
  celebs[8] = "Sandra Oh";
  celebs[9] = "Francis Scott Key";

  //index of array to set as name
  int i = rand() % 10;
  // printf("%d", i);
  // printf("%s", celebs[i]);

  //size
  int sz = (rand() % 6) + 5;

  out.name = celebs[i];
  out.size = sz;

  return out;
}

// Write a function that prints out variables of your structs type in a reasonable way.
void printShoe(struct shoes *s) {
  printf("\nNAME: %s\nSHOE SIZE: %d\n", s->name, s->size);
}

// Write a function that modifies values of your struct's type.
void changeName(struct shoes *s, char *newName) {
  s->name = newName;
}

void changeSize(struct shoes *s, int newSize) {
  s->size = newSize;
}
// Write a main function that tests all these things.
//     Have meaningful output.
// DONT FORGET A MAKEFILE
