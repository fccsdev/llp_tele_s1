#include <stdio.h>
int points = 900;

int main(void) {
  if(points < 0 || points > 100){
    return 0;
  }
  if(points < 10) {
    printf("Insuficiente\n");
  }else if (points < 40) {
    printf("Regular\n");
  }else if (points < 70) {
    printf("Bom\n");
  }else if (points < 90) {
    printf("Otimo\n");
  }else {
    printf("Excelente\n");
  }
  return 0;
}