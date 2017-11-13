#include <stdlib.h>

#include <list.h>

list map(element (*func)(element), list l)
{
	list result;

	INIT_LIST(result);

	for (size_t i = 0; i < l.nmemb; i++)
		append_element(&result, func(get(l, i)));

	return result;
}
