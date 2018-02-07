/* Algo 616 1.1 Number 5. Comparison < m*n by saad iqbal */

#include <stdio.h>
typedef int boolean;
#define true 1
#define false 0



int main()
{
  int l1, l2;
  printf("Please enter the size of first array?\n");
  scanf("%d", &l1);
  printf("Please enter the size of second array?\n");
  scanf("%d", &l2);
  int list1[l1];
  int list2[l2];
  int value;
  printf("Please enter the elements of first array?\n");
  for (int i = 0; i < l1; i++) {
    scanf("%d", &value);
    list1[i] = value;
  }

  printf("Please enter the elements of second array?\n");
  for (int i = 0; i < l2; i++) {
    scanf("%d", &value);
    list2[i] = value;
  }

  boolean a = false;
  boolean b = false;


  if (sizeof(list1) < sizeof(list2)) {
	  a = true;
  }
  else
  {
	  b = true;

  }
  int i, j;
  int counter = 0;

 printf("\n");

  if (a == true) {
   for (i = 0; i < sizeof(list1)/sizeof(int); i++) {
     for (j = 0; j < sizeof(list2)/sizeof(int); j++) {
       if (list1[i] == list2[j]) {
         printf("%d" , list1[i]);
         printf(",");
         i++;
         counter++;
       }
       else if (list1[i] < list2[j]) {
         counter++;
         break;
       } else if (list1[i] > list2[j]) {
         counter++;
         continue;
       }
     }
  }
}

if (b == true) {
 for (i = 0; i < sizeof(list2)/sizeof(int); i++) {
   for (j = 0; j < sizeof(list1)/sizeof(int); j++) {
     if (list2[i] == list1[j]) {
       printf("%d" , list2[i]);
       printf(",");
       i++;
       counter++;
     }
     else if (list2[i] < list1[j]) {
       counter++;
       break;
     } else if (list2[i] > list1[j]) {
       counter++;
       continue;
     }
   }
}
}



printf("are the common values between the lists");
printf("\n");
printf("%d, %s", counter, "is the counter");




}
