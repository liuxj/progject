/* file operations
 * Written by: liuxj
 * Date:
 * */

#include <stdio.h>

int main (int argc, char* argv[])
{
    FILE* sp;
    FILE* sp1;
    char ch;
    sp = fopen("Gettyshburg Address", "r");
    sp1 = fopen("out", "w");
    while ((ch = fgetc(sp)) != EOF)
    {
        fputc(ch, sp1);
    }
    fclose(sp);
    fclose(sp1);
    sp = fopen("Gettyshburg Address", "a");
    sp1 = fopen("out", "r");
    fprintf(sp, "\n");
    while ((ch = fgetc(sp1)) != EOF)
    {
        fputc(ch,sp);
    }
    fclose(sp);
    fclose(sp1);
    sp = fopen("foo.c", "r");
    while ((ch = fgetc(sp)) != EOF)
        fputc(ch, stdout);
    fclose(sp);
    return 0;
}
