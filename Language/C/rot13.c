#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    * ROT13 algorithm implemented in C language.
    * 
 */

char rot13(char c)
{
    if (('a' <= c && c <= 'm') || ('A' <= c && c <= 'M'))
        return c + 13;
    else if (('n' <= c && c <= 'z') || ('N' <= c && c <= 'Z'))
        return c - 13;
    else
        return c;
}

void convertTextRot13(char *_text, char *_text2)
{
    int i = 0;
    while (_text[i] != '\0')
    {
        _text2[i] = rot13(_text[i]);
        i++;
    }
    _text2[i] = '\0';
    return;
}

int main()
{
    /* Test */
    char *text = "Hello World\0";
    printf("%s\n", text);

    char *text2 = (char *)calloc(strlen(text), sizeof(char));
    convertTextRot13(text, text2);
    printf("%s\n", text2);

    return 0;
}
