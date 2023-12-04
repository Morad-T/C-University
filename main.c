#include <stdio.h>
#include <stdlib.h>
#include "interface.h"
#include "STD_TYPES.h"
#include <windows.h>
#include <string.h>
/*
 *  Noueldeen Mahmoud
 *  Ammar Mohammed
 *  Morad Tamer
 *  Mahmoud Tarek
 *  Wafaa Magdy
 */


void AddNewStudent();
void DisplayAllStudents();

int main()
{   u8 ReturnHome=' ';
    u32 choice;
    InitStudents();
    do {
    printf("1- Add new student data.\n");
    printf("2- Delete existing student using student ID.\n");
    printf("3- Display all students.\n");
    printf("4- Exit program.\n");
        printf("Enter your mode: ");
        scanf("%d", &choice);
      system("cls");
        switch (choice) {
            case 1:
                AddNewStudent();
            system("cls");
                break;
            case 2:
                DeleteStudent();
            system("cls");
                break;
            case 3:

               DisplayAllStudents();
                printf("press any key to return home ");
                scanf(" %c",&ReturnHome);

                if (' '!=ReturnHome)
                {
                  system("cls");
                    break;
                }

            case 4:
                break;
            default:
                printf("invalid mode.\n");
                printf("try again.\n");
                break;
        }
    } while (choice != 4);

    return 0;
}
