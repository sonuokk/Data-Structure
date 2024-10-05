#include <bits/stdc++.h>
using namespace std;
template <class DLL>
class dnode
{
public:
    DLL data;
    dnode *next;
    dnode *prev;
};
template <class DLL>
class DoublyLinkedList
{
private:
    dnode<DLL> *head;

public:
    DoublyLinkedList()
    {
        head = NULL;
    }
    // func to create linked list
    void creatingList(DLL data)
    {
        dnode<DLL> *n = new dnode<DLL>();
        n->data = data;
        n->next = NULL;
        n->prev = NULL;
        if (head == NULL)
        {
            head = n;
        }
        else
        {
            dnode<DLL> *p = head;
            while (p->next != NULL)
            {
                p = p->next;
            }
            p->next = n;
            n->prev = p;
        }
    }
    // func to  traverse linked list
    void traversal()
    {
        dnode<DLL> *p = head;
        cout << "\t";
        while (p != NULL)
        {
            cout << p->data << "->";
            p = p->next;
        }
        cout << "NULL";
        cout << endl
             << endl;
    }
    void insertionB()
    {
        dnode<DLL> *n = new dnode<DLL>();
        cout << "\tEnter the value you wanna insert in list: ";
        cin >> n->data;
        n->next = head;
        if (head != NULL)
        {
            head->prev = n;
        }
        // n->prev = NULL;
        head = n;
        cout << "\tYour Doubly linked-list:\n";
        traversal();
    }
    void insertionE()
    {
        dnode<DLL> *n = new dnode<DLL>();
        cout << "\tEnter the value you wanna insert at end: ";
        cin >> n->data;
        if (head == NULL)
        {
            head = n;
        }
        else
        {
            dnode<DLL> *p = head;
            while (p->next != NULL)
            {
                p = p->next;
            }
            n->next = NULL;
            n->prev = p;
            p->next = n;
            p = n;
        }
        cout << "\tDoubly Linked-list will be : \n";
        traversal();
    }
    // func to insert before given value
    void insertionBGV()
    {
        dnode<DLL> *n = new dnode<DLL>();
        cout << "\tEnter the value you wanna insert: ";
        cin >> n->data;
        cout << endl;
        DLL val;
        cout << "\tEnter before which value you wanna insert : ";
        cin >> val;
        if (head->data == val)
        {
            n->next = head;
            n->prev = NULL;
            head = n;
        }
        else
        {
            dnode<DLL> *p = head;
            while (p->next->next != NULL && p->next->data != val)
            {
                p = p->next;
            }
            if (p->next->data == val)
            {
                n->next = p;
                n->next = p->next;
                p->prev->next = n;
                p->prev = n;
            }
            else
            {
                cout << "\tOpps!!" << endl;
            }
        }
        cout << "\tDoubly Linked-list will be : \n";
        traversal();
    }
    void insertionAGV()
    {
        dnode<DLL> *n = new dnode<DLL>();
        cout << "\tEnter the value you wanna insert: ";
        cin >> n->data;
        cout << endl;
        DLL val;
        cout << "\tEnter after which value you wanna insert : ";
        cin >> val;
        if (head->data == val)
        {

            n->prev = head;
            head->next = n;
            n->next = NULL;
            head->prev = NULL;
        }
        else
        {
            dnode<DLL> *p = head;
            while (p->next != NULL && p->data != val)
            {
                p = p->next;
            }
            if (p->next == NULL)
            {
                if (p->data == val)
                {
                    n->next = NULL;
                    n->prev = p;
                    p->next = n;
                }
                else
                {
                    cout << "\tOops!!" << endl;
                }
            }
            else
            {
                n->next = p->next;
                n->prev = p;
                p->next->prev = n;
                p->next = n;
            }
        }
        cout << "\tDoubly Linked-list will be : \n";
        traversal();
    }
    void deletionB()
    {
        if (head == NULL)
        {
            exit;
        }
        else
        {
            dnode<DLL> *p = head;
            head = head->next;
            head->prev = NULL;
            delete (p);
        }
        cout << "\tDoubly Linked-list will be : \n";
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
            head == NULL;
        }
        else
        {
            dnode<DLL> *p = head;
            while (p->next != NULL)
            {
                p = p->next;
            }
            p->prev->next == NULL;
            delete (p);
        }
        cout << "\tDoubly Linked-list will be : \n";
        traversal();
    }
    void deletionBGV()
    {
        dnode<DLL> *p = head;
        dnode<DLL> *q = p->next;
        DLL val;
        cout << "\tEnter before which value you wanna delete: ";
        cin >> val;
        if (head == NULL)
        {
            exit;
        }
        else
        {
            while (q->next->data != val && q->next != NULL)
            {
                p = p->next;
                q = q->next;
            }
            if (q->next->data == val)
            {
                p->next = q->next;
                q->next->prev = p;
            }
            else
            {
                cout << "\tData doesn't exist.\n";
            }
            delete (q);
        }
        cout << "\tDoubly Linked-list will be : \n";
        traversal();
    }
    void deletionAGV()
    {
        dnode<DLL> *p = head;
        dnode<DLL> *q = p->next;
        DLL val;
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
            q->prev->next = q->next;
            delete (q);
        }
        cout << "\tDoubly Linked-list will be : \n";
        traversal();
    }
    void search()
    {
        DLL val;
        dnode<DLL> *p = head;
        cout << "\tEnter the value you wanna search in list: ";
        cin >> val;
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
                i++;
                if (p->data == val)
                {
                    flag++;
                    break;
                }
                p = p->next;
            }
            if (flag == 1)
            {
                cout << "\n\t" << val << " found at position " << i << endl;
            }
            else
            {
                cout << "\tValue not found!!!";
            }
        }
    }
};
int main()
{
    DoublyLinkedList<int> obj;
    int val, option, key, data;
    char choice, ch;
    cout << "\n\tWanna create doubly linked-list? ('y'/'n'): ";
    cin >> choice;
    while (choice == 'y' || choice == 'Y')
    {
        cout << endl;
        cout << "\tEnter the element: ";
        cin >> data;
        obj.creatingList(data);
        cout << "\tWanna add more in list? ('y'/'n') : ";
        cin >> choice;
    }

    cout << "\nYour doubly Linked-list: \n";
    obj.traversal();
    do
    {
        cout << endl;
        cout << "\n\t****************************************" << endl;
        cout << "\t Choose any of option you wanna perform  " << endl;
        cout << "\t****************************************" << endl;
        cout << "\t* 1. Insertion at Begining               " << endl;
        cout << "\t* 2. Insertion at End                    " << endl;
        cout << "\t* 3. Insertion before given value        " << endl;
        cout << "\t* 4. Insertion after given value         " << endl;
        cout << "\t* 5. Deletion at Begining                " << endl;
        cout << "\t* 6. Deletion at End                     " << endl;
        cout << "\t* 7. Deletion before given value         " << endl;
        cout << "\t* 8. Deletion after given value          " << endl;
        cout << "\t* 9. Searching in a linked list          " << endl
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
            // cout << "\tError 404!";
            break;
        case 4:
            obj.insertionAGV();
            // cout << "\tError 404!";
            break;
        case 5:
            obj.deletionB();
            break;
        case 6:
            obj.deletionE();
            // cout << "\tError 404!";
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