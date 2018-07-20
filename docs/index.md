## Structures ##
- [list](/include/list.h#L36)
- [element](/include/list.h#L25)

## Macros ##

| Macro Name                      | Description                 | Example |
|---------------------------------|-----------------------------|---------|
| [INIT_LIST](/include/list.h#L6) | initialize a list structure |         |

## Functions ##

| Function Name                           | Description                  | Usage                                  | Example                                 |
|-----------------------------------------|------------------------------|----------------------------------------|----------------------------------------|
| [append](/src/append.c)                 | append a value to a list     | `append(list *, type, value)`          | [example](../examples/append.c)         |
| [append_element](/src/append_element.c) | append a element to a list   | `append_element(list *, element)`      | [example](../examples/append_element.c) |
| [filter](/src/filter.c)                   | python like filter function   | `filter(list, function)`                | [example](../examples/filter.c)         
| [get](/src/get.c)                       | get element by index         | `get(list, index)`                     | [example](../examples/get.c)            |
| [map](/src/map.c)                       | python like map function     | `map(list, function)`                  | [example](../examples/map.c)            |
| [print_element](/src/print_element.c)   | print value in given element | `print_element(element)`               |                                         |
| [print_list](/src/print_list.c)         | print the list               | `print_list(list)`                     |                                         |
| [reduce](/src/reduce.c)                 | python like reduce function  | `reduce(list, function)`               | [example](../examples/reduce.c)         |
| [slice](/src/slice.c)                   | slice a list                 | `slice(list, start, stop, step)`       | [example](../examples/slice.c)          |
| [sorted](/src/sorted.c)                 | sort a list                  | `sorted(list, cmpr(element, element))` |                                         |
