#include <iostream>
using namespace std;
struct node
{
    int val;
    node *next;
};

// 填空题，实际只有这一段是写入提交框内的
node *createList()
{
    int n;
    struct node *head = NULL, *now = NULL, *next = NULL;
    while(1)
    {
        cin >> n;
        if (n == -1)  break;
        next = new node;
        next->val = n;
        next->next = NULL;
        if (head == NULL)  head = next;
        else  now->next = next;
        now = next;
    }
    return head;
} //和第一题一样

node *reverseList(node *head)
{
    int num = 0;
    for (node *p = head; p != NULL; p = p->next)
        num++;
    if (num == 0)  return NULL;
    else if ( num == 1 ) return head;
    node *a = head, *b = head->next, *c = head->next->next;
    a->next = NULL;
    while (c != NULL)
    {
        b->next = a;
        a = b;
        b = c;
        c = c->next;
    }
    b->next = a;
    return b;
}
// 到此为止

int main()
{
    node *head = NULL;
    head = createList();
    node *head1 = NULL;
    head1 = reverseList(head);
    if (head1 == NULL)  cout << "-1 ";
    else
    {
        node *p = head1;
        while (p != NULL)
        {
            cout << p->val << " ";
            p = p->next;
        }
    }
    return 0;
}