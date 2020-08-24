class Solution {
public:
    void reorderList(ListNode* head) 
    {
        vector<ListNode*> address;
        ListNode* t=head;
        if(head==NULL) return;
        address.push_back(head);
        while(t->next!=NULL)
        {
            t=t->next;
            address.push_back(t);
        }
        for(int i=0;i<(address.size()-1)/2;i++)
        {
            ListNode* end=address[address.size()-1-i];
            ListNode* start=address[i];
            end->next=start->next;
            start->next=end;
            if(address.size()-2-i>=0)
            address[address.size()-2-i]->next=NULL;
        }
    }
};
