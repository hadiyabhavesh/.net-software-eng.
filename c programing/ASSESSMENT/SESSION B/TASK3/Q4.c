#include <stdio.h>
struct Student {
    char name[50];
    int marks;
};
void printTopper(struct Student students[], int n) {
    int topIndex = 0;
    int i;
    for (i = 1; i < n; i++) {
        if (students[i].marks > students[topIndex].marks) {
            topIndex = i;
        }
    }
    printf("Topper: %s\n", students[topIndex].name);
    printf("Marks: %d\n", students[topIndex].marks);
}
int main() {
    struct Student students[3] = {
        {"Rahul", 85},
        {"Priya", 92},
        {"Amit", 78}
    };
    printTopper(students, 3);
}
