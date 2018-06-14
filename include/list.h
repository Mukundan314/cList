#include <stdlib.h>

#ifndef LIST_LIBRARY_H
#define LIST_LIBRARY_H

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


element get(list, int index);

element reduce(element (*func)(element, element), list);

list filter(int (*func)(element), list);

list map(element (*func)(element), list);

list new_list(size_t size, ...);

list range(int start, int stop, int step);

list slice(list, int start, int stop, int step);

list sorted(list l, int (*cmpr)(element, element));

size_t len(list);

void append(list *, type, ...);

void append_element(list *, element);

void extend(list *, list);

void print_element(element);

void print_list(list);

#endif /* LIST_LIBRARY_H */
