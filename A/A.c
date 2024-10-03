#include <stdio.h>
#include <string.h>

int main() {
  int tmddn_score, software_score;
  char tier[6][10] = { "Ruby", "Diamond", "Platinum", "Gold", "Silver", "Bronze" };
  char tmddn_tier[10], software_tier[10];

  scanf("%s", tmddn_tier);
  scanf("%d", &tmddn_score);
  scanf("%s", software_tier);
  scanf("%d", &software_score);

  for (int i = 0; i < 6; i++) {
    if (strcmp(tmddn_tier, tier[i]) == 0) {
      tmddn_score += i * 10;
    }
    if (strcmp(software_tier, tier[i]) == 0) {
      software_score += i * 10;
    }
  }

  if (tmddn_score < software_score) {
    printf("gimanja teukgeomhaera");
  } else {
    printf("no");
  }

  return 0;
}