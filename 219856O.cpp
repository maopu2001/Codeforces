#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int alphbt[26] = {};
  for (int i = 0; i < n; i++) {
    char c;
    scanf(" %c", &c);
    alphbt[c - 'a']++;
  }
  for (int i = 0; i < 26; i++) {
    while (alphbt[i]--)
      printf("%c", (char)(i + 'a'));
  }
  return 0;
}