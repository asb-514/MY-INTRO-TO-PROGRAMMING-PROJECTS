 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

void maxValue(char *s, int *min, int *max);
int main(void)
{
    int i,col, min, max;
    char *text[] = {"1+2+3"};
    col = sizeof(text)/sizeof(text[0]);
    for(i=0; i<col; i++)
    {
        maxValue(text[i], &min, &max);
        printf("min = %d, max = %d", min, max);
    }
}

void maxValue(char *s, int *min, int *max)
{
    int i;
    char* temp = malloc(strlen(s) + 1);
    char* del = "+";
    char* token;
    strcpy(temp, s);
    token = strtok(temp, del);

    int stringInts = atoi(token);
    for(i=0; i<stringInts; i++)
    {
        if(*min < stringInts)
            *min = stringInts;
        if (*max > stringInts) {
            *max = stringInts;
        }
    } 
}