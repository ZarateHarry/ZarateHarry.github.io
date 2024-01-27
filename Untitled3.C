#include <stdio.h>

// Define the maximum number of questions
#define MAX_QUESTIONS 5

int main() {
    char questions[MAX_QUESTIONS][100]; // Array to store questions
    char answers[MAX_QUESTIONS][100];   // Array to store answers

    // Initialize the questions
    strcpy(questions[0], "GUSTO BAKA MA BRIGHT?");
    strcpy(questions[1], "DI");
    strcpy(questions[2], "What is your favorite hobby?");
    strcpy(questions[3], "What is your profession?");
    strcpy(questions[4], "Any interesting fact about yourself?");

    printf("Welcome to the Interview Program!\n");

    // Ask and record answers
    for (int i = 0; i < MAX_QUESTIONS; i++) {
        printf("%s\n", questions[i]);
        fgets(answers[i], sizeof(answers[i]), stdin);
    }

    printf("\nThank you for the interview!\n");

    // Display the answers
    printf("\nInterviewee's Answers:\n");
    for (int i = 0; i < MAX_QUESTIONS; i++) {
        printf("%s: %s", questions[i], answers[i]);
    }

    return 0;
