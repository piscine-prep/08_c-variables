#include <float.h>
#include <limits.h>
#include <stdio.h>

int main() {
  // Types entiers
  int integer = 1234;
  char character = 'A';
  unsigned int positive_only = 50000;
  short small_integer = 123;
  long large_integer = 123456789L;
  long long very_large_integer = 9223372036854775807LL;

  // Types à virgule flottante
  float floating_point = 4.5f;
  double double_precision = 3.141592653589793;

  // Différentes bases numériques
  int decimal = 42;       // Base 10
  int octal = 052;        // Base 8 (commence par 0)
  int hexadecimal = 0x2A; // Base 16 (commence par 0x)
  int binary = 0b101010;  // Base 2 (commence par 0b) - Requiert C99 ou plus

  // Types de chaînes de caractères
  char *message = "My message";
  char array_message[] = {'H', 'e', 'l', 'l', 'o', '\0'};

  // Affichage avec formatage
  printf("=== Types entiers ===\n");
  printf("Integer: %d\n", integer);
  printf("Character as letter: %c\n", character);
  printf("Character as ASCII value: %d\n", character);
  printf("Unsigned integer: %u\n", positive_only);
  printf("Short integer: %hd\n", small_integer);
  printf("Long integer: %ld\n", large_integer);
  printf("Long long integer: %lld\n", very_large_integer);

  printf("\n=== Types à virgule flottante ===\n");
  printf("Float (standard): %f\n", floating_point);
  printf("Float (notation scientifique): %e\n", floating_point);
  printf("Float (6 décimales): %.6f\n", floating_point);
  printf("Double precision: %.15f\n", double_precision);

  printf("\n=== Différentes bases numériques ===\n");
  printf("Decimal (42): %d\n", decimal);
  printf("Octal (052): %d (decimal) / %o (octal)\n", octal, octal);
  printf("Hexadecimal (0x2A): %d (decimal) / %x (hexa)\n", hexadecimal,
         hexadecimal);
  printf("Binary (0b101010): %d (decimal)\n", binary);

  printf("\n=== Chaînes de caractères ===\n");
  printf("String pointer: %s\n", message);
  printf("Character array: %s\n", array_message);

  printf("\n=== Limites des types ===\n");
  printf("Int range: %d to %d\n", INT_MIN, INT_MAX);
  printf("Float precision: %d significant digits\n", FLT_DIG);
  printf("Double precision: %d significant digits\n", DBL_DIG);

  return 0;
}