//===================
// ABOUT ME - C VERSION
//===================

#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100

int main(){

    // VARIABLE DECLARATION
    char name[MAX_LENGTH];
    char course[MAX_LENGTH];
    char hobby[MAX_LENGTH];
    char reason[MAX_LENGTH];
    char expectation[MAX_LENGTH];
    char definition[MAX_LENGTH];

    // WELCOME MESSAGE
    printf("===========\n");
    printf(" WELCOME TO YOUR FIRST C PROGRAM!\n");
    printf("===========\n\n");

    // QUESTION 1: NAME
    printf("1. What is your name? ");
    fgets(name, MAX_LENGTH, stdin);
    name[strcspn(name, "\n")] = '\0'; // Remove newline character

    // QUESTION 2: COURSE (BBIT or BCS)
    printf("2. What course are you doing? (BBIT or BCS) ");
    fgets(course, MAX_LENGTH, stdin);
    course[strcspn(course, "\n")] = '\0'; // Remove newline character

    // QUESTION 3: HOBBY
    printf("3. What is your hobby? ");
    fgets(hobby, MAX_LENGTH, stdin);
    hobby[strcspn(hobby, "\n")] = '\0'; // Remove newline character

    // QUESTION 4: REASON FOR CHOOSING THE COURSE
    printf("4. Why did you choose this course? ");
    fgets(reason, MAX_LENGTH, stdin);
    reason[strcspn(reason, "\n")] = '\0'; // Remove newline character

    // QUESTION 5: EXPECTATIONS
    printf("5. What do you expect to learn in programming? ");
    fgets(expectation, MAX_LENGTH, stdin);
    expectation[strcspn(expectation, "\n")] = '\0'; // Remove newline character

    // QUESTION 6: DEFINITION OF PROGRAMMING
    printf("6. In your own words, what is programming? ");
    fgets(definition, MAX_LENGTH, stdin);
    definition[strcspn(definition, "\n")] = '\0'; // Remove newline character

    // DISPLAY THE SUMMARY
    printf("\n===================\n");
    printf("YOUR PROFILE SUMMARY\n");
    printf("===================\n\n");

    printf("Name: %s\n", name);
    printf("Course: %s\n", course);
    printf("Hobby: %s\n", hobby);
    printf("Reason for choosing the course: %s\n", reason);
    printf("Expectation: %s\n", expectation);
    printf("Programming is: %s\n", definition);

    printf("\n===========\n");
    printf(" Thank you for completing this!\n");
    printf("===========\n");
    
    return 0;
}