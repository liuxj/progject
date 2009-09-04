/*
 * hello there
 * */
#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *sp;
    char ch;
    sp = fopen("fileout.txt", "w");
    do
    {
        ch = getchar();
        fputc(ch, sp);
    } while (ch != '\n');
    fclose(sp);
    return printf("hello there\n");
}
