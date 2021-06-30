#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>

string std[14] = {"Kindergarten", "First/Second Grade", "Third Grade", "Fourth Grade", "Fifth Grade", "Sixth Grade", "Seventh Grade",
    "Eighth Grade", "Ninth Grade", "Tenth Grade", "Eleventh Grade", "Twelfth Grade", "College student", "Professor"};

string ari(string s) {
    int p = strlen(s);
    int letters = 0;
    int words = 0;
    int sentences = 0;
    for (int i=0;i<p;i++) {
        if (isalnum(s[i])) {
            characters++ ;
        }
        else if (s[i] == ' ') {
            words++ ;
        }
        else if (s[i] == '.' || s[i] == '?' || s[i] == '!') {
            sentences++ ;
        }
    }
    float index = trunc((4.71*((float)letters/words)) + (0.5*((float)words/sentences)) - 21.43)+1;
    return std[index];
}
