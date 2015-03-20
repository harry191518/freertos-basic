#ifndef SHELL_H
#define SHELL_H

int parse_command(char *str, char *argv[]);
char *pwd_return();

typedef void cmdfunc(int, char *[]);

cmdfunc *do_command(const char *str);

#endif
