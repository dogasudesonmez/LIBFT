#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char a[] = "doğa";
	char b[] = "kaan";
	char c[] = "merhaba";

	t_list *first = ft_lstnew(a);
	t_list *second = ft_lstnew(b);
	ft_lstadd_front(&first,second);
	
	//printf("%d\n", ft_lstsize(first));
	printf("%s\n", (char *)ft_lstlast(first));
}
