#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "display.c"

#define BIGGEST_POSSIBLE_NUMBER 100;
#define INITIAL_SCORE 1000;

int main() {
  display_spongebob();

  int level;

  printf("What level you want to play?\n");
  printf("(1) Easy (2) Medium (3) Hard\n");
  printf("Choose: ");
  scanf("%d", &level);

  int attempts = 1;

  switch (level) {
  case 1:
    attempts = 20;
    break;
  case 2:
    attempts = 15;
    break;
  case 3:
    attempts = 7;
    break;
  default:
    attempts = 1;
    printf("Smart, right? I have a challenge for you :)\n");
    break;
  }

  srand(time(0));
  int secretNumber = rand() % BIGGEST_POSSIBLE_NUMBER;

  float score = INITIAL_SCORE;

  // printf("The secret number is %d. Don't tell anyone :)\n", secretNumber);

  int won = 0;

  for (int index = 1; index <= attempts; index++) {
    printf("Attempt %d of %d\n", index, attempts);

    int input;
    printf("What is your input? ");
    scanf("%d", &input);

    if (input < 0) {
      printf("You can only guess positive numbers!\n");

      continue;
    }

    won = input == secretNumber;

    if (input == secretNumber) {
      printf("Congrats, you crushed (with %d attempts)!\n", index);
      won = 1;
      break;
    } else if (input > secretNumber) {
      printf("Your guess was greater than the secret number\n");
    } else {
      printf("Your guess was lower than the secret number\n");
    }

    float lostPoints = abs(input - secretNumber) / (float)2;
    score = score - lostPoints;
  }

  if (won) {
    display_smile_face();
  } else {
    display_homer_simpson();

    printf("The number was %d.\n", secretNumber);
  }

  printf("Thanks for participating. Hope you had some fun :)\n");

  printf("You had an score of %.1f.\n", score);
}
