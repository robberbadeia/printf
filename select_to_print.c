#include "main.h"

/**
 * select_to_print - Prints an argument based on its type
 * @fmt: Formatted string in which to print the arguments.
 * @lst: List of arguments to be printed.
 * @index: ind
 * Return: void
 */

void select_to_print(const char *fmt, int *index, va_list lst)
{
int i = 0;
st selector[] = {
{'d', print_intNumber}, {'i', print_intNumber},
{'r', print_revstring}, {'R', print_rot13},
{'c', print_char}, {'s', print_str},
{'%', print_percent}, {'\0', NULL}
};

while (selector[i].key != '\0')
{
if (selector[i].key == fmt[*index])
{
selector[i].func(lst);
}
i++;
}

}

