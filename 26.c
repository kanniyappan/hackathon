#include <stdio.h>

#include <stdbool.h>

#define MAX 7

int intArray[MAX] = {4,6,3,2,1,9,7};


void display() 
{
   
int i;
   
for(i = 0;i < MAX;i++) 
{
      
printf("%d ",intArray[i]);
   
}

}

void swap(int num1, int num2) 
{
   
int temp = intArray[num1];
   
intArray[num1] = intArray[num2];
   
intArray[num2] = temp;

}

int partition(int left, int right, int pivot) 
{
   
int leftPointer = left -1;
   
int rightPointer = right;
   
while(true) 
{
     
while(intArray[++leftPointer] < pivot) 
{
     
}
      
while(rightPointer > 0 && intArray[--rightPointer] > pivot) 
{
      
}
      
if(leftPointer >= rightPointer) 
{
         
break;
      
} 
else 
{
                 
swap(leftPointer,rightPointer);
      
}
   
}
	
    
swap(leftPointer,right);
   
return leftPointer;

}

void quickSort(int left, int right) 
{
   
if(right-left <= 0) 
{
      
return;   
   
}
else 
{
      
int pivot = intArray[right];
      
int partitionPoint = partition(left, right, pivot);
      
quickSort(left,partitionPoint-1);
      
quickSort(partitionPoint+1,right);
   
}        

}

int main() 
{
   
quickSort(0,MAX-1);
    
display();

}