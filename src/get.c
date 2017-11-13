#include <stddef.h>
#include <stdio.h>

#include <list.h>

element get(list l, int index) {
	if (index < 0)
		index += l.nmemb;
	if ((index < 0) || (index >= (int)l.nmemb))
		fprintf(stderr, "IndexError: list index out of range");
	return(l.values[index]);
}
