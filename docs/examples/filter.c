#include <stdio.h>
#include <list.h>

int func(element e) {
	if (e.t == INT)
		return(1);
	return(0);
}

int main()
{
	list l1, l2;
	INIT_LIST(l1);

	append(&l1, INT, 1);
	append(&l1, CHAR, '1');
	append(&l1, STR, "123");
	append(&l1, INT, 2);
	append(&l1, DOUBLE, 1.1);
	append(&l1, INT, 3);
	append(&l1, INT, 4);
	append(&l1, INT, 5);

	l2 = filter(func, l1);

	print_list(l1);
	printf("\n");
	print_list(l2);
	printf("\n");
}
