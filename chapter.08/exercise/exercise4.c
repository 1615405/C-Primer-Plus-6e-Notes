/**
 * C Primer Plus Sixth Edition
 * 
 * Chapter 8 Exercise 4:
 * 
 * Write a program that reads input as a stream of characters until
 * encountering EOF. Have it report the average number of letters per word.
 * Don’t count whitespace as being letters in a word. Actually, punctuation
 * shouldn’t be counted either, but don’t worry about that now. (If you do want
 * to worry about it, consider using the ispunct() function from the ctype.h
 * family.)
*/


#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    int ch;
    bool in_word = false;
    int letter_count = 0, word_count = 0;

    while ((ch = getchar()) != EOF) {
        if (isalpha(ch)) {
            letter_count++;
            if (!in_word) {
                in_word = true;
                word_count++;
            }
        } else {
            in_word = false;
        }
    }

    printf("Average letters per word: %.2f\n", (float) letter_count / word_count);

    return 0;
}