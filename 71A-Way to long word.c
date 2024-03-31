#include <stdio.h>
 
int main() {
  int n, lenght;
  char word[99];
  scanf("%d", &n);
 
  for (int i = 0; i <= n; i++) {
    gets(word);
    lenght = strlen(word);
    if (lenght > 10) {
      printf("%c", word[0]);
      printf("%d", lenght - 2);
      printf("%c\n", word[lenght - 1]);
    } else {
      printf("%s\n", word);
    }
  }
  return 0;
}
