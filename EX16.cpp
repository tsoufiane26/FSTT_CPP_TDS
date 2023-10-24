#include <iostream>
using namespace std;
struct Element
{
    int data;
    Element *next;
    Element(int val) : data(val), next(nullptr) {}
};

class SimpleLinkedList
{
private:
    Element *head;
public:
    SimpleLinkedList() : head(nullptr) {}
    ~SimpleLinkedList()
    {
        while (head)
        {
            Element *temp = head;
            head = head->next;
            delete temp;
        }
        //Delete pour eviter toute fuite de la memoire
    }
    void prepend(int data)
    {
        Element *newElement = new Element(data);
        newElement->next = head;
        head = newElement;
    }
    void supprimer_pre_element()
    {
        if (head)
        {
            Element *temp = head;
            head = head->next;
            delete temp;
        }
    }
    void afficher()
    {
        Element *current = head;
        while (current)
        {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }
};
int main()
{
    SimpleLinkedList myList;

    myList.prepend(7);
    myList.prepend(1);
    myList.prepend(4);

    cout << "La list initial: ";
    myList.afficher();

    myList.supprimer_pre_element();
    cout << "Apres la supression de la premier element : ";
    myList.afficher();

    return 0;
}
