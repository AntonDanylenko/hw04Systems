int mystrcpy(char dest[], char src[]){
  for(int i=0; i<sizeof(dest); i++){
    dest[i] = src[i];
  }

  return 0;
}

int main(){  
  char string1[] = "Hello World!";
  printf("String 1: %s, size: %ld\n", string1, sizeof(string1));

  char string2[] = "Goodbye";
  printf("String 2: %s, size: %ld\n", string2, sizeof(string2));

  /* Copies string2 into string1, aka each char in string2 is put into
  the address of the char that used to be in the same position in string1,
  and the rest becomes \0. */
  strcpy(string1, string2);
  printf("strcpy(string1, string2) --> string1 is now: %s\n", string1);
  printf("\n");

  char string3[] = "Hello World!";
  printf("String 1: %s, size: %ld\n", string1, sizeof(string1));

  char string4[] = "Goodbye";
  printf("String 2: %s, size: %ld\n", string2, sizeof(string2));
  
  mystrcpy(string3, string4);
  printf("mystrcpy(string3, string4) --> string3 is now: %s\n", string1);
  printf("\n");

  return 0;
}
