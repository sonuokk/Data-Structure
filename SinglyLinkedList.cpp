#include <bits/stdc++.h>
using namespace std;
template <class LL>
class Node
{
public:
    LL data;
    Node *next;
};
template <class LL>
class LinkedList
{
private:
    Node<LL> *head;

public:
    LinkedList()
    {
        head = NULL;
    }
    void creatingList(LL data)
    {
        Node<LL> *n = new Node<LL>();
        n->data = data;
        n->next = NULL;
        if (head == NULL)
        {
            head = n;
        }
        else
        {
            Node<LL> *p = head;
            while (p->next != NULL)
            {
                p = p->next;
            }
            p->next = n;
        }
    }
    void traversal()
    {
        Node<LL> *p = head;
        cout << "\t";
        while (p != NULL)
        {
            cout << p->data << "->";
            p = p->next;
        }
        cout << "NULL";
    }
    void insertionB()
    {
        Node<LL> *n = new Node<LL>();
        cout << "\tEnter the element you wanna insert at begining of linked list: ";
        cin >> n->data;
        n->next = head;
        head = n;
        cout << "\tLinked-List:\n";
        traversal();
    }
    void insertionE()
    {
        Node<LL> *n = new Node<LL>();
        cout << "\tEnter the element you wanna insert at end of linked list: ";
        cin >> n->data;
        n->next = NULL;
        if (head == NULL)
        {
            head = n;
        }
        else
        {
            Node<LL> *p = head;
            while (p->next != NULL)
            {
                p = p->next;
            }
            p->next = n;
        }
        cout << "Linked-list:\n";
        traversal();
    }
    void insertionBGV()
    {
        Node<LL> *n = new Node<LL>();
        int x;
        cout << "\tEnter the value you wanna insert: ";
        cin >> n->data;
        cout << "\nEnter before which valur you wanna insert: ";
        cin >> x;

        if (x == head->data)
        {
            n->next = head;
            head = n;
        }
        else
        {
            Node<LL> *p = head;
            while (p->next->next != NULL && p->next->data != x)
            {
                p = p->next;
            }
            if (p->next->data == x)
            {
                n->next = p->next;
                p->next = n;
            }
            else
            {
                cout << "\nNo result" << endl;
            }
        }
        cout << "Linked-list:\n";
        traversal();
    }
    void insertionAGV()
    {
        Node<LL> *n = new Node<LL>();
        int x;
        cout << "\tEnter the value you wanna insert: ";
        cin >> n->data;
        cout << "\nEnter before which value you wanna insert: ";
        cin >> x;
        Node<LL> *p = head;
        while (p->next != NULL && p->data != x)
        {
            p = p->next;
        }
        if (p->next == NULL)
        {
            if (p->data == x)
            {
                n->next = NULL;
                p->next = n;
            }
        }
        else
        {
            n->next = p->next;
            p->next = n;
        }
        cout << "Linked-list:\n";
        traversal();
    }
    void deletionB()
    {
        if (head == NULL)
        {
            exit;
        }
        Node<LL> *p = head;
        head = head->next;
        delete p;
        cout << "\tNow Liked-list:\n";
        traversal();
    }
    void deletionE()
    {
        if (head == NULL)
        {
            exit;
        }
        else if (head->next == NULL)
        {
            head = NULL;
        }
        else
        {
            Node<LL> *p = head;
            Node<LL> *q;
            while (p->next->next != NULL)
            {
                p = p->next;
            }
            q = p->next;
            p->next = NULL;
            delete (q);
        }
        cout << "\tNow Linked-list\n";
        traversal();
    }
    void deletionBGV()
    {
        LL val;
        Node<LL> *p = head;
        Node<LL> *q = p->next;
        cout << "\tEnter before which value you wanna delete: ";
        cin >> val;
        if (head == NULL)
        {
            exit;
        }
        else
        {
            while (p->next->next->data != val)
            {
                p = p->next;
            }
            q = p->next;
            p->next = q->next;
            delete (q);
        }
        cout << "\tNow the Link-list will be: \n";
        traversal();
    }
    void deletionAGV()
    {
        LL val;
        Node<LL> *p = head;
        Node<LL> *q = p->next;
        cout << "\tEnter after which value you wanna delete: ";
        cin >> val;
        if (head == NULL)
        {
            exit;
        }
        else
        {
            while (p->data != val && p->next != NULL)
            {
                p = p->next;
            }
            q = p->next;
            p->next = p->next->next;
            delete (q);
        }
        cout << "\tNow Linkedlist will be: \n";
        traversal();
    }
    void search()
    {
        LL key;
        Node<LL> *p = head;
        cout << "\tEnter the value you wanna search: ";
        cin >> key;
        if (head == NULL)
        {
            exit;
        }
        else
        {
            int flag = 0;
            int i = 0;
            while (p != NULL)
            {
                if (p->data == key)
                {
                    flag++;
                    break;
                }
                p = p->next;
            }
            if (flag == 1)
            {
                cout << "\tKey is found at position " << i << "\n";
            }
            else
            {
                cout << "\tKey not found:(\n";
            }
        }
    }
};
int main()
{
    // system("color b");
    LinkedList<int> obj;
    int i, key, data, option, val;
    char choice, ch;
    cout << "\n\tCreate your Linked-list:('y'/'n') : ";
    cin >> choice;
    while (choice == 'y' || choice == 'Y')
    {
        cout<<endl;
        cout << "\tEnter your element: ";
        cin >> data;
        obj.creatingList(data);
        cout << "\tDo you wanna add more? ('y'/'n') ";
        cin >> choice;
    }
    cout << endl;
    cout << "\tLinked-list" << endl;
    obj.traversal();
    do
    {
        cout << endl;
        cout << "\n\t****************************************" << endl;
        cout << "\t Choose any of option you wanna perform  " << endl;
        cout << "\t****************************************" << endl;
        cout << "\t1. Insertion at Begining" << endl;
        cout << "\t2. Insertion at End" << endl;
        cout << "\t3. Insertion before given value" << endl;
        cout << "\t4. Insertion after given value" << endl;
        cout << "\t5. Deletion at Begining" << endl;
        cout << "\t6. Deletion at End" << endl;
        cout << "\t7. Deletion before given value" << endl;
        cout << "\t8. Deletion after given value" << endl;
        cout << "\t9. Searching in a linked list" << endl
             << endl;
        cout << "\tEnter the option you wanna perform: ";
        cin >> option;
        switch (option)
        {
        case 1:
            obj.insertionB();
            break;

        case 2:
            obj.insertionE();
            break;
        case 3:
            obj.insertionBGV();
            break;
        case 4:
            obj.insertionAGV();
            break;
        case 5:
            obj.deletionB();
            break;
        case 6:
            obj.deletionE();
            break;
        case 7:
            obj.deletionBGV();
            break;
        case 8:
            obj.deletionAGV();
            break;
        case 9:
            obj.search();
            break;
        default:
            cout << "\nAhhh Shitt...you chose wrong option mate.";
            break;
        }
        cout << "\n\tEnter your choice to do more: ";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
    return 0;
}