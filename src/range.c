#include <list.h>

list range(int start, int stop, int step) {
	list result;

	INIT_LIST(result);

	for (int i = start; i < stop; i += step)
		append(&result, INT, i);

	return(result);
}

