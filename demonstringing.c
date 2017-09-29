#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void demo(){
  printf("PRESENTING..... (drumroll please)\n");
  printf("..................\n");
  printf("strcpy and strncpy!!\n\n");

  char * original = "It's Friday and school's almost out!";
  char empty[100] = "";

  printf("Strcpy copies the contents of one string into another string\n\n");
  printf("The original string: %s\n", original);
  printf("The empty string: %s\n", empty);

  printf("The syntax for using strcpy is the following:\n");
  printf("strcpy( char * destination, source * destination)\n\n");

  strcpy(empty, original);

  printf("The code strcpy(empty, original) is now being run.\n");
  printf("...............\n");
  printf("The results are in! Let's see how the empty string looks now\n\n");
  printf("The original string: %s\n", original);
  printf("The empty string: %s\n\n", empty);

  char empty2[100] = "";

  printf("Woohoo! It looks like strcpy did the job. What about strncpy?\n");
  printf("Well, strncpy is quite similar, except it only copies a portion of the string, any portion that you desire.\n\n");
  printf("The original string: %s\n", original);
  printf("The empty string: %s\n", empty2);

  printf("The syntax for using strcpy is the following:\n");
  printf("strcpy( char * destination, source * destination, size)\n\n");
  printf("size is how many characters you want copied\n");

  strncpy(empty2, original, 11);
  printf("The code strcpy(empty, original, 11) is now being run.\n");
  printf("...............\n");
  printf("The results are in! Let's see how the empty string looks now\n\n");
  printf("The original string: %s\n", original);
  printf("The empty string: %s\n\n", empty2);

  printf("NOTICE\n");
  printf("If destination string length is less than source string, \nentire source string value won’t be copied into destination string.\n");

}

int main(){
  demo();
  return 0;
}
