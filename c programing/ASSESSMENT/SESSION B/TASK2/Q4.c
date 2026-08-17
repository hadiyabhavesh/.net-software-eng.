#include <stdio.h>

int main() {
    int studyHours[7];
    int i = 0;
    while (i < 7) {
        printf("Enter study hours for Day %d: ", i + 1);
        scanf("%d", &studyHours[i]);
        while (studyHours[i] < 0 || studyHours[i] > 24) {
            printf("Invalid! Enter between 0 and 24: ");
            scanf("%d", &studyHours[i]);
        }
        i++;
    }
}
