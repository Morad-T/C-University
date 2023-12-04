#include <stdio.h>
#include "interface.h"
#include "STD_TYPES.h"

void InitStudents()
{
    FILE* file = fopen("students.txt", "r");
    if (file != NULL)
        {
        char line[256];
        while (fgets(line, sizeof(line), file) != NULL) {
            sscanf(line, "%[^,],%c,%d,%d", students[numStudents].name, &students[numStudents].gender,
                    &students[numStudents].age, &students[numStudents].studyYear);
            numStudents++;
        }
        fclose(file);
    }
}

void FileWrite()
{
    FILE* file = fopen("students.txt", "w");
    if (file != NULL)
        {
        for (u32 i = 0; i < numStudents; i++)
        {
            fprintf(file, "%s,%c,%d,%d\n", students[i].name, students[i].gender, students[i].age, students[i].studyYear);
        }
        fclose(file);
    }
}

void DeleteStudent() {
    u32 studentId;
    printf("enter the student id to delete: ");
    scanf("%d", &studentId);

    if (studentId >= 0 && studentId < numStudents) {
        for (u32 i = studentId; i < numStudents - 1; i++) {
            students[i] = students[i + 1];
        }
        numStudents--;
        FileWrite();
        printf("student deleted\n");
        Sleep(2000);
    } else {
        printf("invalid student id.\n");
    }
}
