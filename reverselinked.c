class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int n = 0;
        ListNode* arr[500];
        ListNode* ptr = head;
        ListNode* ptr1;
        while(n<=right){
            if(n>=left) arr[n-left] = ptr;
            ptr1=ptr;
            ptr = ptr->next;
            n++;
        }
        n--;
        ptr =ptr1;
        while(n>=left ){
            ptr->next=arr[n-left];
            ptr = ptr->next;
            n--;
        }
        return head;
    }
};
