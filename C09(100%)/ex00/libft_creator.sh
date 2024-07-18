set -e;

cc -Wall -Wextra -Werror -c *.c;

ar rcs libft.a *.o;

rm -f *.o