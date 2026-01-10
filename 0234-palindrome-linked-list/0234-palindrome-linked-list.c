/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

#define MAXSIZE 10000000

int stack[MAXSIZE];
int top=-1;

void push(int a){
    top++;
    stack[top]=a;
}

int pop(){
    int c=stack[top];
    top--;
    return c;
}




bool isPalindrome(struct ListNode* head) {
    struct ListNode *temp=head;
    while(temp!=NULL){
        push(temp->val);
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        if(temp->val!=pop()) return false;
        temp=temp->next;
    }
    return true;
}