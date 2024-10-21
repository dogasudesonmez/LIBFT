#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void	to_my_up(void *a)
{
	char *c;

	c = (char *)a;
	while(*c)
	{
		*c = ft_toupper(*c);
		c++;
	}
}

int main()
{
	char a[] = "doga";
	char b[] = "sude";
	char c[] = "sonmez";

	t_list *lst = ft_lstnew(a);
	t_list *lst2 = ft_lstnew(b);
	t_list *lst3 = ft_lstnew(c);

	lst->next = lst2;
	lst2->next = lst3;
	//ft_lstclear(&lst, free);
	ft_lstiter(lst, to_my_up);
	printf("%s", lst->content);
}
