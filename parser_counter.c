//parser
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//#define del" .,?!"
struct parser
{
        FILE * fp;
};

struct parser * parser_create()
{
        struct parser *p = malloc(sizeof(struct parser));
        if(p == NULL)
        {
           perror("storage error ");

        }
        return p;
}


char *parser_getword(struct parser *p, const char *fi)
{
        p->fp = fopen(fi, "r");
        char word[4096];
        while((fscanf(p->fp, "%s", word ) != EOF))
        {
                char *result = strdup(word);
                fclose(p->fp);
                return result;
        }

    fclose(p->fp);
    return NULL;


}

void parser_delete(struct parser*p)
{
        free(p);
}
