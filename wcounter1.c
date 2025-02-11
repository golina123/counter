#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//#define del" .,?!"
struct parser
{
	char stin;
	FILE * fp;
	char word;
};

struct parser * parser_create(const char *fi)
{
	struct parser *p = malloc(sizeof(struct parser));
	if(p == NULL)
	{
	   perror("storage error ");

	}
	p->fp = fopen(fi, "r");
	return p;
}


void parser_getword(struct parser *p)
{
	char word[4096];
	while((fscanf(p->fp, "%s", word ) != EOF))
	{
		printf("%s\n", word);
	}

}

void parser_delete(struct parser*p)
{
    if (p) {
              if (p->fp) {
                             fclose(p->fp);
                         }
           }
	free(p);
}
