#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <string.h>


int main()
{
    char B[10];

    char s1[] = "I owe you $1000";
    char s2[] = "I don't know you";

    int loop = 1;
    while (loop == 1)
    {
        printf ("What is your name? \n");
        strcpy(B, "iuqbijokerqgdug");
        int i = 0;
        if (strlen(B) > 10){
            printf("%s", s1);
            return(1);
        }
        for (i; i <= strlen(B); i++)
        {
            if (B[i] == 'j')
                { if (B[i+1] == 'o') 
                    { if (B[i+2] == 'k') 
                        { if (B[i+3] == 'e') 
                            { if (B[i+4] == 'r') {
                                printf("%s \n", s1);
                                return(1);
                            }                            
                        }
                    }
                }
            }
        }
        printf("%s \n", s2);
        return(1);
    }
}