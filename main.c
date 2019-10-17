#include <stdlib.h>
#include <stdio.h>

#include "structs.h"

// struct shoes {
//   char* name;
//   int size;
// };

int main(){

  srand(time(NULL));

  struct shoes sh;
  sh.name = "Angelina Jolie";
  sh.size = 10;

  printf("\n\nCreate new shoes struct: {'Angelina Jolie', 10}\n");
  printShoe(&sh);

  printf("\n\nCreate example shoes structs (each example is different):\n");
  struct shoes ex = createExample();
  printShoe(&ex);
  struct shoes ex2 = createExample();
  printShoe(&ex2);
  struct shoes ex3 = createExample();
  printShoe(&ex3);

  printf("\n\nChange first example to {'George', 2}\n");

  changeSize(&ex, 2);
  changeName(&ex, "George");

  printShoe(&ex);


  return 0;
}
