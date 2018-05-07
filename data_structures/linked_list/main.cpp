#include "LinkedList.h"


int main()
{
    LinkedList<int> LL1(new Node<int>(7));
    LL1.insertToTail(1);
    LL1.insertToTail(6);
    LL1.insertToTail(5);
    LL1.insertToTail(4);

    LinkedList<int> LL2(new Node<int>(5));
    LL2.insertToTail(9);
    LL2.insertToTail(2);

    LinkedList<int> LL = LL1.sumLists(LL1, LL2);
    LL.print();
    LL2.print();
    LL = LL2;
    LL.print();
    LL2.print();

    return 0;
}
