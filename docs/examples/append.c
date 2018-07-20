#include <stdio.h>
#include <list.h>

int main()
{
	list l1, l2;
	INIT_LIST(l1);
	INIT_LIST(l2);

	float f = 3.14;

	append(&l2, INT, 20);
	append(&l2, STR, "hello world");
	append(&l2, CHAR, 'h');
	append(&l2, DOUBLE, 3.1415);
	append(&l2, DOUBLE, f);

	append(&l1, INT, 20);
	append(&l1, STR, "hello world");
	append(&l1, CHAR, 'h');
	append(&l1, DOUBLE, 3.1415);
	append(&l1, DOUBLE, f);
	append(&l1, LIST, &l2);

	print_list(l1);
	printf("\n");
}
