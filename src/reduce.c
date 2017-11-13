#include <stddef.h>

#include <list.h>

element reduce(element (*func)(element, element), list l)
{
	element result;

	result.t = INT;
	result.data.INT = 0;

	if (l.nmemb <= 0)
		return(result);

	result = get(l, 0);

	for (size_t i = 1; i < l.nmemb; i++)
		result = func(result, get(l, i));

	return result;
}
