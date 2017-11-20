#include <list.h>

list merge(list l1, list l2, int (*cmpr)(element, element))
{
	size_t i, j;
	list result;

	INIT_LIST(result);
	i = j = 0;

	while ((i < l1.nmemb) && (j < l2.nmemb)) {
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

list sort(list l, int (*cmpr)(element, element))
{
	if (l.nmemb == 1)
		return(l);

	list l1, l2;

	INIT_LIST(l1);
	INIT_LIST(l2);

	for (size_t i = 0; i < l.nmemb; i++) {
		if (i < l.nmemb/2)
			append_element(&l1, get(l, i));
		else
			append_element(&l2, get(l, i));
	}

	l1 = sort(l1, cmpr);
	l2 = sort(l2, cmpr);

	return(merge(l1, l2, cmpr));
}

