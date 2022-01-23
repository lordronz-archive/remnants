#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char *name[50];
    char *dorm[50];
}
student;

int main()
{
    int enrollment;
    printf("enrollment : ");
    scanf("%d", &enrollment);
    student *students = malloc(enrollment * sizeof(student));
    for (int i = 0; i < enrollment; i++)
    {
        printf("name : ");
        scanf("%s", students[i].name);
        printf("dorm : ");
        scanf("%s", students[i].dorm);
    }
    FILE *file = fopen("students.csv", "w");
    if (file)
    {
        for (int i = 0; i < enrollment; i++)
        {
            fprintf(file, "%s,%s\n", students[i].name, students[i].dorm);
        }
        fclose(file);
    }
    free(students);
}