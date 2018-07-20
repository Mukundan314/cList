#include <stdio.h>
#include <list.h>

int main()
{
	element e;
	list l;

	INIT_LIST(l);

	e.t = INT;
	e.data.INT = 3;

	append_element(&l, e);

	print_list(l);
	printf("\n");
}
