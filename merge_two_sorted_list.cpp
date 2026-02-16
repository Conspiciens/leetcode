#include <iostream> 

struct ListNode {
    ListNode *next; 
    int val; 
} 

ListNode* merge_two_sorted_str(ListNode *list1, ListNode *list2) {
    if (!list1) 
        return list2; 
    if (!list2) 
        return list1; 

    ListNode *head = NULL;
    if (list1->val > list2->val) {
       head = list1->val; 
       list1 = list1->next;  
    } else {
       head = list2->val; 
       list2 = list2->next;  
    } 

    ListNode *start = head; 
    while (list1 && list2) {
        if (list1->val > list2->val) {
            start->next = list2; 
            list2 = list2->next;
        } else {
            start->next = list1; 
            list1 = list1->next; 
        } 
    } 

    if (!list1) 
        start->next = list1; 
    if (!list2)
        start->next = list2; 

    return head; 
    
} 

int main() {
    return 0; 
} 
