int main(){
  char string1[] = "Hello World!";
  printf("String 1: %s, size: %d\n", string1, sizeof(string1));

  char string2[] = "Goodbye";
  printf("String 2: %s, size: %d\n", string2, sizeof(string2));

  /* Copies string2 into string1, aka each char in string2 is put into
  the address of the char that used to be in the same position in string1,
  and the rest becomes \0. */
  strcpy(string1, string2);
  printf("strcpy(string1, string2) --> string1 is now: %s\n", string1);
  printf("\n");


  char string3[] = "lots of letters";
  printf("String 3: %s, size: %d\n", string3, sizeof(string3));

  char string4[] = "less letters";
  printf("String 4: %s, size: %d\n", string4, sizeof(string4));

  /* Unlike strcpy(), strncpy() takes three arguments: the destination string,
  the source string, and the size of the desired string. If the size given
  is less than the size of the source string, then it is truncated. */
  strncpy(string4, string3, 16);
  printf("strncpy(string4, string3, 16) --> string 4 is now: %s\n", string4);

  return 0;
}
