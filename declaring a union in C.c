#include <stdio.h>     // Include standard input/output library
#include <conio.h>     // Include console I/O library (optional, may not be needed in modern compilers)
#include <string.h>    // Include string manipulation functions

// Define a union named 'student' to store student information
union student
{
    int roll;           // Integer to hold roll number
    char name[10];      // Character array to hold the student's name
};

int main()
{
    // Locally declared union variables for student information
    union student s1, s2; // Create two student unions

    // Copying name "Messi" to the first student union
    char cop1[10] = "Messi"; // Temporary character array to hold name
    strcpy(s1.name, cop1);   // Copy name from cop1 to s1.name
    s1.roll = 1;             // Assign roll number to s1

    // Copying name "Ronaldo" to the second student union
    char cop2[10] = "Ronaldo"; // Temporary character array to hold name
    strcpy(s2.name, cop2);     // Copy name from cop2 to s2.name
    s2.roll = 2;                // Assign roll number to s2

    // Print information of the first student
    printf("\nRoll: %d", s1.roll);            // Print roll number of student 1
    printf("\nName: %s\n", s1.name);          // Print name of student 1

    // Print information of the second student
    printf("\nRoll: %d", s2.roll);            // Print roll number of student 2
    printf("\nName: %s\n", s2.name);          // Print name of student 2

    return 0; // Return success status
}
