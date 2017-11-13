#include <stdio.h>
#include <list.h>

element to_int(element e)
{
	switch(e.t) {
	case CHAR:
		e.data.INT = e.data.CHAR - '0';
		e.t = INT;
		break;
	case STR:
		e.data.INT = atoi(e.data.STR);
		e.t = INT;
		break;
	case DOUBLE:
		e.data.INT = (int) e.data.DOUBLE;
		e.t = INT;
	}
	return(e);
}

int main()
{
	list l1, l2;

	INIT_LIST(l1);

	append(&l1, INT, 314);
	append(&l1, CHAR, '3');
	append(&l1, DOUBLE, 3.1415);
	append(&l1, STR, "31");

	l2 = map(to_int, l1);

	print_list(l1);
	printf("\n");
	print_list(l2);
	printf("\n");
}
