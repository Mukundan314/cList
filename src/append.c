#include <stdarg.h>

#include <list.h>

void append(list *l, type t, ...)
{
	element e;
	va_list parms;

	va_start(parms, t);

	e.t = t;

	switch(t) {
	case INT:
		e.data.INT = va_arg(parms, int);
		break;
	case INTP:
		e.data.INTP = va_arg(parms, int*);
		break;
	case CHAR:
		e.data.CHAR = (char) (va_arg(parms, int));
		break;
	case STR:
		e.data.STR = va_arg(parms, char *);
		break;
	case DOUBLE:
		e.data.DOUBLE = va_arg(parms, double);
		break;
	case DOUBLEP:
		e.data.DOUBLEP = va_arg(parms, double*);
		break;
	case LIST:
		e.data.LISTP = va_arg(parms, list*);
		break;
	case LISTP:
		e.data.LISTP = va_arg(parms, list*);
		break;
	case VOIDP:
		e.data.VOIDP = va_arg(parms, void*);
		break;
	}

	va_end(parms);

	append_element(l, e);
}
