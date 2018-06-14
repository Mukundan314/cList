#include <list.h>

element max(list l, int (*cmpr)(element, element))
{
	element m = get(l, 0);
	for (int i = 1; i < len(l); i++) {
		if (cmpr(m, get(l, i)) > 0)
			m = get(l, i);
	}
	return m;
}
