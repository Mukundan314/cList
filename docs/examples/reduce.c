#include <stdio.h>
#include <list.h>

element sum(element e1, element e2)
{
	element e3;

	e3.data.INT = e1.data.INT + e2.data.INT;
	e3.t = INT;

	return e3;
}

int main()
{
	list l;
	element e;

	INIT_LIST(l);

	append(&l, INT, 5);
	append(&l, INT, 4);
	append(&l, INT, 1);
	append(&l, INT, 7);
	append(&l, INT, 2);
	append(&l, INT, 9);

	e = reduce(sum, l);

	printf("%d\n", e.data.INT);
	return(0);
}
