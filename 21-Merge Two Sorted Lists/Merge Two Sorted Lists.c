/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if(!list1) return list2;
    if(!list2) return list1;
    
    struct ListNode  stack;
    struct ListNode*  ptr = &stack;
    while(list1 != NULL && list2 != NULL){
        if((list1->val)<=(list2->val)){
            ptr->next = list1;
            list1 = list1->next;
        }else{
            ptr->next = list2;
            list2 = list2->next;
        }
        ptr = ptr->next;
    }

    if(list1)
        ptr->next = list1;
    if(list2)
        ptr->next = list2;


    return stack.next;
}