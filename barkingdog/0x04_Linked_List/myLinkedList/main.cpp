#include "LinkedList.hpp"

int	main()
{
	LinkedList list;

	list.insert(1, 3);
	list.traverse();
	list.insert(3, 3);
	list.traverse();
	list.erase(1);
	list.traverse();
	list.erase(1);
	list.traverse();
	list.erase(0);
	list.traverse();
	std::cout << list.getSize() << '\n';
	return 0;
}
