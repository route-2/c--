#include<stdio.h>
#include<stdlib.h>
struct myArray {
int total_size; // how much size to reserve
int used_size; // how much size to  use
int *ptr; // when we request memory from heap 
// the int8 malloc will cling you to ptr which will point to the 0th index of the free array 
// by doing this we get memory from heap the ptr points to the  first element in 0th index which is 7
};
void createArray(struct myArray* a,int tSize, int uSize) // creates a structure of myArray pointer and store in _a
 { 
// (*a).total_size = tSize;
// (*a).used_size = uSize;
// (*a).ptr = (int*)malloc(tSize*sizeof(int));
a->total_size=tSize; // the size given in marks assigned to total size
a->used_size=uSize; // the size given in marks allotted to used size
a->ptr = (int*)malloc(tSize * sizeof(int)); // we are requesting memory from heap 
// because after the fuction once it returns the stack memory gets wasted but in heap you can reuse the space allocated to you
// block of memory will still exist until manually free()ed
// Abstract data type is a custom data type which has to be acc to requirements 
}
void show(struct myArray *a )
{
for(int i=0;i<a->used_size; i++) // i is series of elements
{
    printf("%d\n", (a->ptr)[i]); // prints the array *a.ptr is a pointer to the value stored in a 
}
}
void setval(struct myArray *a )

{

int n;
for(int i=0;i<a->used_size; i++)
{
    printf("enter element %d", i); // ask user to give you a value
    scanf("%d",&n); // store it in address of a via the pointer 
    (a->ptr)[i] = n;
}

}
int main()
{
    struct myArray marks; // instance myArray of marks it creates a struct my array assignes 4bytes of total size,used size and for ptr

     createArray(&marks, 10,2); // this creates an array takes address of marks,how much tot size and used size do u want
     setval(&marks);
     show(&marks);
    return 0;
}
// 