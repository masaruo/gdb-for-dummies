#include <stdio.h>
#include <string.h>

typedef struct	person_s
{
	char	*name_;
	int		age_;
}	person_t;

typedef struct	list_s
{
	void			*data_;
	struct list_s	*next;
}	list_t;

void	printlist(list_t *head)
{
	list_t	*crnt = head;
	while (crnt)
	{
		person_t data = *(person_t*)crnt->data_;
		dprintf(2, "age is %d and ", data.age_);
		dprintf(2, "name is %s\n", data.name_);
		crnt = crnt->next;
	}
}

int	main(void)
{
	char *name;
	name = strdup("mogawa");
	void *vptr = name;
	printf("name is %s\n", vptr);

	person_t	hoge, piyo, aho;
	hoge.name_ = strdup("hoge");
	hoge.age_ = 20;
	piyo.name_ = strdup("piyo");
	piyo.age_ = 30;
	aho.name_ = strdup("mogawa");
	aho.age_ = 42;
	list_t		head, first, second;
	head.data_ = &hoge;
	head.next = &first;
	first.data_ = &piyo;
	first.next = &second;
	second.data_ = &aho;
	second.next = NULL;
	printlist(&head);

	return (0);
}

/*
define print_name
print (char*)$arg0
end
*/
