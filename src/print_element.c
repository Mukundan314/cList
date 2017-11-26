#include <stdio.h>

#include <list.h>

void print_element(element e)
{
	switch(e.t) {
	case INT:
		printf("%d", e.data.INT);
		break;
	case INTP:
		printf("%p", e.data.INTP);
		break;
	case CHAR:
		printf("%c", e.data.CHAR);
		break;
	case STR:
		printf("%s", e.data.STR);
		break;
	case DOUBLE:
		printf("%lf", e.data.DOUBLE);
		break;
	case DOUBLEP:
		printf("%p", e.data.DOUBLEP);
		break;
	case LIST:
		print_list(*e.data.LISTP);
		break;
	case LISTP:
		printf("%p", e.data.LISTP);
		break;
	case VOIDP:
		printf("%p", e.data.VOIDP);
		break;
	}
}

