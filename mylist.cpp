// sll.cpp
//
#include <iostream>
#include <stdlib.h>  // <cstdlib>
using namespace std;

struct Node
{
	int info;
	Node *next;
	Node() {
		next = NULL;
	}
	Node (int x) {
		info = x; next = NULL;
	}
};

struct sll
{
	Node * head;
	sll() {
		head = NULL;
	}
	void insert_left(Node *p)
	{
		if (head == NULL) head = p;
		else
		{
			p->next = head;
			head = p;
		}
	}

	Node * remove_left()
	{
		Node * t = head;
		head = head->next;
		t->next = NULL;
		return t;
	}

	void traverse ()
	{
		Node *p;
		p = head;

		while (p != NULL)
		{
			cout << p->info << ' ';
			p = p->next;
		}
		cout << endl << endl;
	}
	int get_head()
	{
		return head->info;
	}
	int empty()
	{
		return head == NULL;
	}
};

//#if __INCLUDE_LEVEL__ < 1
int main()
{
	Node *head = NULL, *p;
	sll S;
	srand(time(0));

	for (int i = 0; i < 10; i++)
	{
		// allocate space for a new Node
		p = new Node(rand()%100);
		cout << p->info << endl;

		S.insert_left(p);
		S.traverse();
	}
	cout << endl;

	while (!S.empty())
	{
		Node *t;
		t = S.remove_left();
		cout << "t->info " << t->info << endl;
	}
}
//#endif
