#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};

ListNode *createList()
{
    ListNode *head = NULL;
    ListNode *p1, *p2;
    p1 = new ListNode;
    p2 = p1;
    cin >> p1->val;
    while (p1->val != -1)
    {
        if (head == NULL)
            head = p1;
        else
            p2->next = p1;
        p2 = p1;
        p1 = new struct ListNode;
        cin >> p1->val;
    }
    p2->next = NULL;
    delete p1;
    return head;
}

ListNode *oddEvenList(ListNode *head)
{
    ListNode *head_odd = new ListNode, *op = head_odd;
    ListNode *head_even = new ListNode, *ep = head_even;
    int len = 0, i = 1;
    for (ListNode *p = head; p != NULL; p = p->next) len++;
    if (len == 0) return NULL;
    else if (len == 1) return head;

    for (ListNode *p = head; p != NULL; p = p->next, i++)
    {
        if(i%2!=0)
        {
            op->val = p ->val;
            if(p->next!=NULL && i<len-1)
            {
                op->next = new ListNode;
                op=op->next;
            }   
        }
        else
        {
            ep->val = p ->val;
            if(p->next!=NULL && i<len-1)
            {
                ep->next = new ListNode;
                ep=ep->next;
            }
        }
    }
    op -> next = head_even;
    return head_odd;
}

int main()
{
    ListNode *head;
    head = createList();
    ListNode *ans = oddEvenList(head);
    if (ans == NULL)
        cout << "-1";
    else
    {
        while (ans != NULL)
        {
            cout << ans->val << " ";
            ans = ans->next;
        }
    }
    return 0;
}