#include <malloc.h>

#include <list.h>

void append_element(list *l, element e)
{
	l->values = (element *) realloc(l->values, (l->nmemb+1)*sizeof(e));
	l->values[l->nmemb] = e;
	l->nmemb += 1;
}
