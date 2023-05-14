/**
 * C Primer Plus Sixth Edition
 * 
 * Chapter 6 Exercise 1:
 * 
 * Write a program that creates an array with 26 elements and stores the 26 lowercase
 * letters in it. Also have it show the array contents.
*/


#include <stdio.h>
#define ALPHABET_LENGTH 26

int main(void)
{
    char alphabet_lowercase[ALPHABET_LENGTH];
    char letter;
    int i;

    for (letter = 'a'; letter - 'a' < ALPHABET_LENGTH; letter++) {
        alphabet_lowercase[letter - 'a'] = letter;
    }

    printf("The lowercase letters of the alphabet are:\n");

    for (i = 0; i < ALPHABET_LENGTH; i++) {
        printf("%c ", alphabet_lowercase[i]);
    }

    return 0;
}