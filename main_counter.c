#include<stdio.h>
#include"dictionary.h"
#include"parser.h"
int main(int argc , char * argv[])
{

        char * word;
        struct parser * p = parser_create();
        struct dictionary * d = dictionary_create();


        while( (word = parser_getword(p, argv[1])) != NULL)
        {
                 dictionary_add_word(d, word);
        }
        parser_delete(p);

        dictionary_print(d);
        dictionary_delete(d);
        return 0;
}
