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

node *deleteElements(node *head, int v)
{
    node *p = head, *pre = NULL;
    while (p != NULL)
    {
        if (p->val == v)
        {
            if (p == head)
            {
                head = head->next;
                delete p;
                p = head;
            }
            else
            {
                pre->next = p->next;
                delete p;
                p = pre->next;
            }
        }
        else
        {
            pre = p;
            p = p->next;
        }
    }
    return head;
}
// 到此为止

int main()
{
    node *head = NULL;
    head = createList();
    int v;
    cin >> v;
    head = deleteElements(head, v);
    if (head == NULL)   cout << "-1 ";
    else
    {
        node *p = head;
        while (p != NULL)
        {
            cout << p->val << " ";
            p = p->next;
        }
    }
    return 0;
}