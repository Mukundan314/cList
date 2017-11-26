#include <stdio.h>

#include <list.h>

void print_list(list l)
{
	element e;

	printf("[");
	for (size_t i = 0; i < l.nmemb; i++) {
		e = get(l, i);
		print_element(e);
		printf(", ");
	}
	printf("]");
}
