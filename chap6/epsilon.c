#include <stdio.h>

int main(void) {
  double epsilon;
  printf("Enter epsilon: ");
  if (scanf("%lf", &epsilon) != 1 || epsilon <= 0.0) return 0;

  double e = 1.0;    // includes 1/0!
  double term = 1.0; // current = 1/0!
  int k = 0;

  for (;;) {
    k += 1;          // move to next factorial
    term /= k;       // term = 1/k!
    if (term < epsilon) break;  // stop BEFORE adding too-small term
    e += term;       // add 1/k!
  }

  printf("e ≈ %.10f\n", e);
  return 0;
}

