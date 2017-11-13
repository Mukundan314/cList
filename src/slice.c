#include <stddef.h>
#include <list.h>

list slice(list l, int start, int end, int step)
{
    list result;
    INIT_LIST(result);

    for (int i = start; i < end; i += step)
        append_element(&result, get(l, i));

    return(result);
}
