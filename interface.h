#ifndef DATA_H
#define DATA_H
#include"STD_TYPES.h"


typedef struct {
    u8 name[50];
    u8 gender;
    u32 age;
    u32 studyYear;
} Student;

Student students[100];
u32 numStudents;

void InitStudents();
void FileWrite();
void DeleteStudent();

#endif /* DATA_H */
