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

ListNode* mergeNodes(ListNode* head) {
    ListNode *head2 = new ListNode;
    ListNode *p1 = head, *p2 = head2;
    int tmp=0;

    while(p1!=NULL)
    {
        if(p1->val==0 && tmp!=0)
        {
            p2->val = tmp;
            tmp=0;
            if(p1->next!=NULL)
            {
                p2->next = new ListNode;
                p2 = p2->next;
            }
        }
        else
            tmp += p1->val;
        p1=p1->next;
    }
    return head2;
}

int main()
{
    ListNode *head;
    head = createList();
    ListNode *ans = mergeNodes(head);
    while (ans != NULL)
    {
        cout << ans->val << " ";
        ans = ans->next;
    }
    return 0;
}