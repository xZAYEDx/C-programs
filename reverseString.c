/* program to reverse a string */ 
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i, line = strlen(str);
    printf("\n Enter a string: ");
    gets(str);

    line = strlen(str);
    printf("\n ******will display the string in reverse order******:- \n");
    for(i = line -1; i >= 0; i--)
    {
        if(str[i] == ' ')
        {
            str[i] = '\0';
            printf("%s ", &(str[i]) + 1);
        }
    }
    printf("%s ", str);
    return 0;
}