#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "../defs.h"

// forward declarations
void print_letters(char arg[], int arg_len);

void print_arguments(int argc, char *argv[])
{
    int i = 0;
    
    int arg_len = strlen(*argv);

    for (i = 0; i < argc; i++) {
        print_letters(argv[i], arg_len);
    }
}

void print_letters(char arg[], int arg_len)
{
    int i = 0;

    for (i = 0; i < arg_len-1; i++) {
        char ch = arg[i];
        

        if (isalpha(ch) || isblank(ch)) {
            printf("'%c' == %d ", ch, ch);
        }
    }

    printf("\n");
}

int main(int argc, char *argv[])
{
    print_arguments(argc, argv);
    return 0;
}
