#include<stdio.h>
void main()
{
char ch;
int lowercase_Vowel,uppercase_Vowel;
printf("Enter an alphabet:");
scanf("%c",&c);
lowercase_Vowel=(ch == "a" ||ch == "e" ||ch == "i" ||ch == "o" ||ch == "u");
uppercase_Vowel=(ch == "A" ||ch == "E" ||ch == "I" ||ch == "O" ||ch == "U");
if(lowercase_vowel||uppercase_vowel)
{
printf("%c is a VOWEL",c);
}
else
{
printf("%c is a CONSONANT",c);
}
}

