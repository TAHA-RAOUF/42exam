#include <stdio.h>
// made by hamzaaa :D
const float increase[] = {88.0, 80.0, 68.0, 60.0, 54.0, 47.0, 42.0, 36.0, 32.0, 28.0};
const int numLevels = 10;

void calculator(int currentLevel, float currentPercentage, float addedExp) {

    if (currentLevel < 0 || currentLevel >= numLevels) {
        printf("Invalid current level.\n");
        return;
    }

    if (currentPercentage < 0.0 || currentPercentage >= 100.0) {
        printf("Invalid current percentage.\n");
        return;
    }

    float percentageIncreasePerExp = increase[currentLevel] / 100.0;
    float totalExp = addedExp;
    float newPercentage = currentPercentage;

    while (totalExp > 0 && currentLevel < numLevels) {
        float percentageToNextLevel = 100.0 - newPercentage;
        float expToNextLevel = percentageToNextLevel / percentageIncreasePerExp;

        if (totalExp >= expToNextLevel) {
            totalExp -= expToNextLevel;
            newPercentage = 0.0;
            currentLevel++;

            if (currentLevel < numLevels) {
                percentageIncreasePerExp = increase[currentLevel] / 100.0;
            }
        } else {
            newPercentage += totalExp * percentageIncreasePerExp;
            if (newPercentage > 100.0) {
                newPercentage = 100.0;
            }
            totalExp = 0;
        }
    }
    printf("New level: %d,%d\n", currentLevel, (int)(newPercentage + 0.5));
    printf("\n");
    printf("GOOD LUCK IN YOUR POOL <3 \n");
    printf("\n");
}

int main() {
    int currentLevel;
    float currentPercentage, addedExp;
    printf("\n");
    printf("Heyyyyy my cute peer :3 \n");
    printf("\n");
    printf("-Enter current level (0-9):");
    scanf("%d", &currentLevel);
    printf("\n");
    printf("-Enter current percentage (0-100): ");
    scanf("%f", &currentPercentage);
    printf("\n");
    printf("-Enter added experience: ");
    scanf("%f", &addedExp);
    printf("\n");
    calculator(currentLevel, currentPercentage, addedExp);
    return 0;
}