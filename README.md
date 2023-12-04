# C-University


# Student Management System
This repo includes the work, documentation and other relevant material for the Embedded IoT Task as outlined [here](https://github.com/Morad-T/University-Student-Management-System/blob/main/Task.pdf)

## Program Requirements
A system that manages the data of the students (Name, Gender, Age, and Academic Year)
The program collects the data in an array and displays each student data in a seperate line formatted as csv as indicated below

`John Doe, M, 20, 3`

`Jane Doe, F, 19, 2`

## User Constraints
Name must not exceed 50 characters
Age must not exceed 30
Gender is indicatd by the characters `M` or `F` for male and female respectivly
Academic Year must not exceed 5

## Limits
Students array size must not exceed 100


## Program Structure
The program is divided into several C files, each responsible for a specific functionality:

`main.c`
`interface.h`
`App.c`
`foo.c`


## Program Operation

### Startup:

upon execution, the program checks for the existence of a text file containing student data. If the file exists, it reads the data and populates the student array.

### Menu Selection:

The program displays a menu with the following options:
Add new student data
Delete existing student using student id
Display all students
Exit program

the user selects an option using the corresponding number and presses enter.

### Option Handling:

#### Option 1: Add new student data:

the program prompts the user to enter student data: full name, gender, age, and study year. It validates the input and adds the student to the array. If the array is full, it displays a message indicating insufficient storage.

#### Option 2: Delete existing student using student id:

the program prompts the user to enter the student id to be deleted. It verifies that the id exists and deletes the corresponding student from the array.

#### Option 3: Display all students:

the program displays all stored student records, each student on a separate line, starting with their id.

#### Option 4: Exit program:

the program terminates execution.

## File Operations:

Upon adding a new student, the program writes the updated student array to the text file.
Upon deleting a student, the program writes the updated student array to the text file.
