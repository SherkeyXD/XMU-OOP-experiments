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
} //和上一题一样

node* merge(node* head1, node* head2)
{
    node *p1 = head1, *p2 = head2, *p = NULL, *head3 = NULL;
    if ( p1==NULL || p2==NULL )  return (p1==NULL) ? p2 : p1;
    while (p1 && p2)
    {
        if (p1->val < p2->val)
        {
            if (head3 == NULL)
            {
                head3 = p1;
                p = p1;
            }
            else
            {
                p->next = p1;
                p = p->next;
            }
            p1 = p1->next;
        }
        else
        {
            if (head3 == NULL)
            {
                head3 = p2;
                p = p2;
            }
            else
            {
                p->next = p2;
                p = p->next;
            }
            p2 = p2->next;
        }
    }
    if (p1==NULL)  p->next = p2;
    if (p2==NULL)  p->next = p1;
    return head3;
}
// 到此为止

int main()
{
    node *head1, *head2, *head3;
    head1 = createList();
    head2 = createList();
    head3 = merge(head1, head2);
    if (head3 == NULL)  cout << "-1 ";
    else
    {
        node *p = head3;
        while (p != NULL)
        {
            cout << p->val << " ";
            p = p->next;
        }
    }
    return 0;
}


