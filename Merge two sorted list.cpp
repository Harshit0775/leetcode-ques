 ListNode temp1=A;
 ListNode temp2=B;
 ListNode result;
 if(A==null)                            /*Base case*/
   return B;
 if(B==null)                            /*Base case*/
   return A;
           
           
if(temp1.val > temp2.val)     /*compare kiye dono me se kon chota value hai then result me assign kr diye*/
   {
    result=temp2;          /*chota value vala pointer to result ab point karne laga */
    result.next=mergeTwoLists(temp1,temp2.next); /* result pointer ko Right shift kiye sath sath */
   }                                                 /* current pointer(temp2) ko v right sift kiye recursively*/
else
  {
    result=temp1;
    result.next=mergeTwoLists(temp1.next,temp2);
  }
           
  return result;  
