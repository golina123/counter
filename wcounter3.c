#include <stdio.h>
#include <math.h>
struct dictionary
{
        char *word;
	int rang;

};
struct symbol
{
	char *sym;
};
struct dictionary * dictionary_create(const char *w)
{
	 struct dictionary *d  = malloc(sizeof(struct dictionary));
	if(d == NULL)
        {
           perror("storage error ");

        }
	d->word = strdup(w);
	d->count = 1;
	return d;
}
void add_symb(struct symbol** symbols, int* max, int* n, char c)
{
	for (int i = 0, i < (*n); i++)
	{
		if ((*symbols)[i] == c)
		{
			(*symbols)[i] = n + 1;
	        }
	}
}
void dictionary_delete(struct dictionary*d)
{
	if(d) {
        free(d->word);
        free(d); 
    }
}
