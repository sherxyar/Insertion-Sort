/* for insert sort:
since we divide into sorted and unsorted part..the first iteration will take the first element and place it into sorted part.

store the value in a variable.
compare value with while with each element until while false.
move down from bottom so that values are safe.
insert the stored value into the array. */

typedef int ItemType[5];
void insertionSort(ItemType A[], int n)
{
   int j, insert_index;
   ItemType x;

   for (int i = 0; i < n; i++)
   {
      // save the element from position i in the array
      x = A[i];

      // Find the insertion point
      insert_index = 0;
      while ((insert_index < i) && (x > A[insert_index]))
         insert_index++;

      // Shift the elements between here and the last sorted one
      for (j = i; j > insert_index; j--)
         A[j] = A[j-1];

      // Store x at the insertion point
      A[j] = x;
   }
}