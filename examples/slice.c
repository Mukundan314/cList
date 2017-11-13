#include <stdio.h>
#include <list.h>

int main()
{
	list l, l2;
	INIT_LIST(l);

	append(&l, INT, 0);
	append(&l, INT, 1);
	append(&l, INT, 2);
	append(&l, INT, 3);
	append(&l, INT, 4);
	append(&l, INT, 5);

	l2 = slice(l, 0, 4, 2);
	print_list(l2);
	printf("\n");
}
