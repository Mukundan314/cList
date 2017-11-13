#include <stdlib.h>

#include <list.h>

list filter(int (*func)(element), list l)
{
	list result;
	element e;
	INIT_LIST(result);

	for (size_t i = 0; i < l.nmemb; i++) {
		e = get(l, i);
		if (func(e)) {
			append_element(&result, e);
		}
	}

	return result;
}
