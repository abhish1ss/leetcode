#include "/home/husqy/Documents/git/leetcode/include/my_include.h"

//PRINT_LOG()

typedef struct ListNode {
     int val;
     struct ListNode *next;
}LN;

void display_list(LN *list)
{
  PRINT_LOG("Entered display list")
  while(list)
  {
    PRINT_LOG("val = %d", list->val);
    list = list->next;
  }
  PRINT_LOG("exit display list")
}

void MoveNode(LN **dest_ref, LN **src_ref)
{
  LN *newNode = *src_ref;
  assert(newNode != NULL);
 
  *src_ref = newNode->next;
  newNode->next = *dest_ref;
  *dest_ref = newNode;
	 
}

LN* mergeTwoLists(LN* l1, LN* l2){
   LN dummy; 
   LN *tail = &dummy;
   dummy.next = NULL;

   while(1)
   { 
     if(l1 == NULL)
     {
       tail->next = l2;
       break;
     }
     else if (l2 == NULL)
     {
       tail->next = l1;
       break;
     }
     if(l1->val <= l2->val)
	MoveNode(&(tail->next), &l1);
     else
	MoveNode(&(tail->next), &l2);

     tail = tail->next;
   }
   return dummy.next;
}

int main()
{
  LN *d1, *d2;
  d1 = malloc(sizeof(LN));
  d1->val = 1;
  d1->next = malloc(sizeof(LN));
  d1->next->val = 3;
  d1->next->next = NULL;
  d2 = malloc(sizeof(LN));
  d2->val = 2;
  d2->next = malloc(sizeof(LN));
  d2->next->val = 4;
  d2->next->next = NULL;
  display_list(d1);
  PRINT_LOG("i"); 
  display_list(d2);
  display_list(mergeTwoLists(d1, d2));

  free(d1->next);
  free(d1);
  free(d2->next);
  free(d2);
  return 0;
}
