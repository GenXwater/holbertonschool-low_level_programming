#ifndef function_pointers_h
#define function_pointers_h

void print_name_uppercase(char *name);
void print_name_as_is(char *name);
void print_name(char *name, void (*f)(char *));

#endif
