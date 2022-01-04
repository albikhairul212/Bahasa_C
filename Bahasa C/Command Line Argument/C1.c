#include <stdio.h>

int main( int argc, char *argv[] )  {

   printf("Nama Programan %s\n", argv[0]);
 
   if( argc == 2 ) {
      printf("Argumen yang diberikan adalah %s\n", argv[1]);
   }
   else if( argc > 2 ) {
      printf("Terlalu banyak argumen yang diberikan.\n");
   }
   else {
      printf("Satu argumen diharapkan.\n");
   }
}