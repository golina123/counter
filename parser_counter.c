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


void parser_getword(struct parser *p, const char *fi)
{
	p->fp = fopen(fi, "r");
	char word[4096];
	while((fscanf(p->fp, "%s", word ) != EOF))
	{
		printf("%s\n", word);
	}

}

void parser_delete(struct parser*p)
{
	fclose(p->fp);
	free(p);
}
