#include <stdarg.h>

#include <list.h>

list new_list(size_t size, ...)
{
	va_list parms;

	list l;
	INIT_LIST(l);

	va_start(parms, size);

	for(size_t i = 0; i < size; i++) {
		append_element(&l, va_arg(parms, element));
	}

	va_end(parms);

	return(l);
}
