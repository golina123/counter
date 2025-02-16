#include<stdio.h>
#include"dictionary.h"
#include"parser.h"
int main(int argv , char * argc[])
{
        FILE * Text;
        struct parser a;
        parser * p = parser_create();
        dictionary * d = dictionary_create();

        char * word;
        while( (word = parser_getword(p)) != NULL)
        {
                 dictionary_add_word(d, word);
        }
        parser_delete(p);

        dictionary_print(d);
        dictionary_delete(d)
        return 0;



}
