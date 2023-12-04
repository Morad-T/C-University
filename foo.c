#include <stdio.h>
#include "interface.h"
#include <string.h>

void AddNewStudent()
{
    printf("enter student details:\n");
    printf("name: ");
    getchar();
    fgets(students[numStudents].name, sizeof(students[numStudents].name), stdin);
    students[numStudents].name[strcspn(students[numStudents].name, "\n")] = '\0';
    printf("m/f: ");
    scanf("%c", &students[numStudents].gender);
    printf("age: ");
    scanf("%d", &students[numStudents].age);
    if (30<students[numStudents].age)
    {
        printf("the student age greater than 30\n");
        return 0;
    }
    printf("study Year: ");
xx:
    scanf("%d", &students[numStudents].studyYear);
    if (5<students[numStudents].studyYear)
    {
        printf("the study year greater than 5\n");
        printf("ERROR enter study year again: ");
        goto xx;
    }
    if (numStudents < 100)
    {
        printf("student id is %d\n",numStudents);
        Sleep(2000);
        numStudents++;
        FileWrite();
        printf("successfully added!\n");
    }
    else
    {
        printf("students has reached maximum number error .\n");
    }
}


void DisplayAllStudents() {
    if (numStudents > 0) {
        printf("|--------------------|\n");
        for (u32 i = 0; i < numStudents; i++) {
            printf("|Student ID:%d          |\n", i);
            printf("|Name: %s               |\n", students[i].name);
            printf("|Gender: %c             |\n", students[i].gender);
            printf("|Age: %d                |\n", students[i].age);
            printf("|Study Year: %d         |\n", students[i].studyYear);
            printf("|--------------------|\n");
        }
    } else {
        printf("ERROR sorry No students available.\n");
    }
}
