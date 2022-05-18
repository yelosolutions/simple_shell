# C - Simple Shell

## Description

The following is a simple shell program

## Compilation

The shell program is compiled this way:

`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh`

## Usage

The shell program can run in either interactive or non-interactive mode.

#### Interactive Mode

```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```

#### Non-Interactive Mode

```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```

### BuiltIns

| Command       | Definition                          |
| ------------- | ----------------------------------- |
| exit [status] | Exits the shell with a given status |
| env           | Prints the current environment      |

### Sample

```
$ ls
AUTHORS    betty_tester.c  env_print.c  hsh         path_get.c   shell.h           strchr.c
README.md  builtinc.c      func_prt.c   lineexec.c  path_test.c  signals.c         token_hndlr.c
append.c   cmdexit.c       funcfr.c     main.c      prompt_r.c   simple_shell_man

$ /bin/ls
AUTHORS    betty_tester.c  env_print.c  hsh         path_get.c   shell.h           strchr.c
README.md  builtinc.c      func_prt.c   lineexec.c  path_test.c  signals.c         token_hndlr.c
append.c   cmdexit.c       funcfr.c     main.c      prompt_r.c   simple_shell_man
```

## Credits

Code done by

- [Joseph Rono](https://github.com/yelosolutions)
- [Angelah Wafula](https://github.com/angelah1994)
