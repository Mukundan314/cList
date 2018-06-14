#include <list.h>

list merge(list l1, list l2, int (*cmpr)(element, element))
{
	size_t i, j;
	list result;

	INIT_LIST(result);
	i = j = 0;

	while ((i < len(l1)) && (j < len(l2))) {
		if (cmpr(get(l1, i), get(l2, j)) < 0) {
			append_element(&result, get(l1, i));
			i += 1;
		} else {
			append_element(&result, get(l2, j));
			j += 1;
		}
	}

	extend(&result, slice(l1, i, l1.nmemb, 1));
	extend(&result, slice(l2, j, l2.nmemb, 1));

	return(result);
}

list sorted(list l, int (*cmpr)(element, element))
{
	if (len(l) == 1)
		return(l);

	list l1, l2;

	INIT_LIST(l1);
	INIT_LIST(l2);

	l1 = slice(l, 0, len(l)/2, 1);
	l2 = slice(l, len(l)/2, len(l), 1);

	l1 = sorted(l1, cmpr);
	l2 = sorted(l2, cmpr);

	return(merge(l1, l2, cmpr));
}
