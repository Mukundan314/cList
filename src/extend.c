#include <list.h>

void extend(list *l1, list l2)
{
	for (size_t i = 0; i < l2.nmemb; i++)
		append_element(l1, get(l2, i));
}

