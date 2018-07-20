## Structures ##
- list
- element

## Macros ##

| Macro Name                      | Description                 | Example |
|---------------------------------|-----------------------------|---------|
| INIT_LIST                       | initialize a list structure |         |

## Functions ##

| Function Name  | Description                  | Usage                                  | Example Usage                          |
|----------------|------------------------------|----------------------------------------|----------------------------------------|
| append         | append a value to a list     | `append(list *, type, value)`          | [example](examples/append.c)           |
| append_element | append a element to a list   | `append_element(list *, element)`      | [example](examples/append_element.c)   |
| filter          | python like filter function   | `filter(list, function)`                | [example](examples/filter.c)            |
| get            | get element by index         | `get(list, index)`                     | [example](examples/get.c)              |
| map            | python like map function     | `map(list, function)`                  | [example](examples/map.c)              |
| print_element  | print value in given element | `print_element(element)`               |                                        |
| print_list     | print the list               | `print_list(list)`                     |                                        |
| reduce         | python like reduce function  | `reduce(list, function)`               | [example](examples/reduce.c)           |
| slice          | slice a list                 | `slice(list, start, stop, step)`       | [example](examples/slice.c)            |
| sorted         | sort a list                  | `sorted(list, cmpr(element, element))` |                                        |
