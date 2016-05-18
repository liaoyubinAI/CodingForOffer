#include "CQueue.h"
#include <stack>

using namespace std;

void Test(char actual)
{
	printf("test %c\n", actual);
}


int main()
{
	CQueue<char> queue;
	queue.appendTail('a');
	queue.appendTail('b');
	queue.appendTail('c');

	char head = queue.deleteHead();
	Test(head);

	head = queue.deleteHead();
	Test(head);

	queue.appendTail('d');

	head = queue.deleteHead();
	Test(head);

	queue.appendTail('e');
	head = queue.deleteHead();
	Test(head);

	head = queue.deleteHead();

	Test(head);
	system("pause");
	return 0;
}