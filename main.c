
#include <stdio.h>
#include <stdlib.h>
void vowelCount(char[],char[]);
int main()
{
    char string[100];
    char vowels[5];
    char label[5]={'A','E','I','O','U','vowels'};
    int i;
    printf("\n Enter a string please.");
    gets(string);
     vowelCount(string,vowels);
        for (i=0; i<6; i++)
            {
                printf("\nTotal  %c's:",label[i]);
                printf(" %d",vowels[i]);
            }
    return 0;
}
void vowelCount(char string[], char vowels[])
{
int A = 0, E = 0, I= 0, O = 0, U = 0, a2 = 0, e2 = 0, i2 = 0, o2 = 0, u2 = 0;
int index = 0;
int totalVowel = 0;
//char vowels[5];
    while (string[index] != '\0')
    {
        if (string[index] == 'A')
            {
                A = A + 1;
                index++;

            }
                else if (string[index] == 'a')
                {
                    a2 = a2 + 1;
                    totalVowel = totalVowel + 1;
                    index++;
                }

                else if (string[index] == 'E')
                {
                    E = E + 1;
                    totalVowel = totalVowel + 1;
                    index++;
                }
                else if (string[index] == 'e')
                {
                    e2 = e2 + 1;
                    totalVowel = totalVowel + 1;
                    index++;
                }
                else if (string[index] == 'I')
                {
                    I = I + 1;
                    totalVowel = totalVowel + 1;
                    index++;
                }
                else if (string[index] == 'i')
                {
                    i2 = i2 + 1;
                    totalVowel = totalVowel + 1;
                    index++;
                }
                else if (string[index] == 'O')
                {
                    O = O + 1;
                    totalVowel = totalVowel + 1;
                    index++;
                }
                else if (string[index] == 'o')
                {
                    o2 = o2 + 1;
                    totalVowel = totalVowel + 1;
                    index++;
                }
                else if (string[index] == 'U')
                {
                    U = U + 1;
                    totalVowel = totalVowel + 1;
                    index++;
                }
                else if (string[index] == 'u')
                {
                    u2 = u2 + 1;
                    totalVowel = totalVowel + 1;
                    index++;
                }
                else
                    index++;


    }

 vowels[0] = A + a2;
 vowels[1] = E + e2;
 vowels[2] = I + i2;
 vowels[3] = O + o2;
 vowels[4] = U + u2;
 vowels[5] = totalVowel;

}
