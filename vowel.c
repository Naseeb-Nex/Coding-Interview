#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("The character is a vowel");
    }
    else
    {
        printf("The character is not a vowel");
    }

    // using switch case
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    // capital letters
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("The character is a vowel");
        break;
    default:
        printf("The character is not a vowel");
    }

    return 0;
}