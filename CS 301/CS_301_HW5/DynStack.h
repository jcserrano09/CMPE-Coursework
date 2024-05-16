using namespace std;

template <class ItemType>
class DynStack
{
protected:
	struct Node
	{
		char value;
		Node *next;
		Node(char value1, Node* next1 = NULL) {
			value = value1;
			next = next1;
		}
	};
	Node *top;
public:
	DynStack() { top = NULL; }
	bool IsEmpty();
	void Push(ItemType);
	void Pop(ItemType &);
};

template <class ItemType>
void DynStack<ItemType>::Push(ItemType item)
{
	top = new Node(item, top);
}

template <class ItemType>
bool DynStack<ItemType>::IsEmpty()
{
	if (top == NULL)
		return true;
	else
		return false;
}

template <class ItemType>
void DynStack<ItemType>::Pop(ItemType &item)
{
	if (IsEmpty()) {
		cout << "Empty File" << endl;
		exit(1);
	}
	else {
		Node *temp;
		item = top->value;
		temp = top;
		top = top->next;
		delete temp;
	}
}