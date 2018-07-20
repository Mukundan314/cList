#include <stdio.h>
#include <list.h>

int main()
{
	list l;
	element e1, e2;
	INIT_LIST(l);

	append(&l, INT, 20);
	append(&l, INT, 30);
	append(&l, INT, 40);
	append(&l, INT, 50);

	e1 = get(l, 1);
	e2 = get(l, -2);

	printf("%d\n", e1.data.INT);
	printf("%d\n", e2.data.INT);
}
