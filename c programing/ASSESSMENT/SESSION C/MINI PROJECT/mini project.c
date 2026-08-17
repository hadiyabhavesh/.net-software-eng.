#include <stdio.h>
struct StudyLog {
    char subject[40];
    float hours[7];
};
void report(struct StudyLog s[], int n)
{
    int i, j,k;
    float total;
    for (i = 0; i < n; i++)
    {
        total = 0;
        for (j = 0; j < 7; j++)
            total += s[i].hours[j];
        printf("\n%s", s[i].subject);
        printf("\nTotal = %.2f", total);
        printf("\nAverage = %.2f\n", total / 7);
        for (j = 0; j < 7; j++)
		{
            printf("Day %d: ", j + 1);
            for (k = 0; k < (int)s[i].hours[j]; k++)
                printf("*");
            printf("\n");
        }
    }
}
int main()
{
    struct StudyLog s[3] = {
        {"C", {0}},
        {"Math", {0}},
        {"English", {0}}
    };
    int choice, sub, day, i,j;
    FILE *fp;
    while (1)
	{
        printf("\n1. Log Today's Study Hours");
        printf("\n2. View Weekly Report");
        printf("\n3. Save & Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("\n1.C  2.Math  3.English");
            printf("\nEnter subject: ");
            scanf("%d", &sub);
            printf("Enter day (1-7): ");
            scanf("%d", &day);
            printf("Enter hours: ");
            scanf("%f", &s[sub - 1].hours[day - 1]);
        }
        else if (choice == 2)
        {
            report(s, 3);
        }
        else if (choice == 3)
        {
            fp = fopen("productivity_log.txt", "w");
            for (i = 0; i < 3; i++)
            {
                fprintf(fp, "%s", s[i].subject);
                for (j = 0; j < 7; j++)
                    fprintf(fp, ",%.2f", s[i].hours[j]);
                fprintf(fp, "\n");
            }
            fclose(fp);
            printf("Data saved!\n");
            break;
        }
        else
            printf("Invalid choice!");
    }
}
