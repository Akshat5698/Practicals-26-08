#include <stdio.h>
int main()
{
    char x;
    printf("Enter a Alphabet :");
    scanf("%c", &x);
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'|| x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
    {
        printf("Entered Number is a vovel");
    }
    else
    {
        printf("Entered Number is a consonant");
    }

    return 0;
}