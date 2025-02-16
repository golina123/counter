#include <stdio.h>
#include <math.h>
#include<string.h>
#define MAXSIZE = 1000
struct element
{
        char *word;
	int rang;

};

struct dictionary {
	struct element a[MAXSIZE];
	int count;
};

struct dictionary * dictionary_create()
{
	struct dictionary *d  = malloc(sizeof(struct dictionary));
	if(d == NULL)
        {
           perror("storage error ");

        }
	d->count = 0;
	return d;
}

void dictionary_add_word(struct dictionary *d, const char * word )
{
	
	int c = 0, i = 0, n = 100;
	for(i =  0; i < d->count; i++){
            if(strcmp (word, d ->a[i].word) == 0)
	    {
		    d->a[i].rang += 1;
		    break;
	    }
	}
	if(i == d->count)
	{
		 d->a[i].word = strdup(word);
		 d->a[i].rang = 1;
		 d->count ++;
	}


}
void dictionary_print(struct dictionary *d)
{
	for(int i = 0; i < n; i++){
		printf("%c %d \n", d->a[i].word, d->a[i].rang );
	}
}
void dictionary_delete(struct dictionary*d)
{
        
        free(d); 
}
