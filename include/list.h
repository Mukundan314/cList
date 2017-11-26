#ifndef LIST_LIBRARY_H
#define LIST_LIBRARY_H

#include <stdlib.h>

#define INIT_LIST(l) \
	l.values = (element *) malloc(sizeof(element)); \
	l.nmemb = 0;

typedef enum {
	INT,
	INTP,
	CHAR,
	STR,
	DOUBLE,
	DOUBLEP,
	LIST,
	LISTP,
	VOIDP,
} type;

struct _list;

typedef struct _element {
	union {
		int INT, *INTP;
		char CHAR, *STR;
		double DOUBLE, *DOUBLEP;
		struct _list *LISTP;
		void *VOIDP;
	} data;
	type t;
} element;

typedef struct _list {
	element *values;
	size_t nmemb;
} list;

void append(list *, type, ...);

void append_element(list *, element);

void extend(list *, list);

list slice(list l, int start, int end, int step);

list sort(list l, int (*cmpr)(element, element));

list range(int start, int stop, int step);

element get(list, int index);

list map(element (*func)(element), list);

list filter(int (*func)(element), list);

element reduce(element (*func)(element, element), list);

void print_list(list);

void print_element(element e);

list slice(list, int start, int stop, int step);

#endif /* LIST_LIBRARY_H */
