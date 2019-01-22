#include <stdio.h>
     
    
void main()
    
{

char ch;
      
printf("Enter a character\n");
      
scanf("%c", &ch);
      
if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch =='o' || ch=='O' || ch == 'u' || ch == 'U')
        
printf("vowel.\n");
      
else if (ch == 'b' || ch == 'B' || ch == 'c' || ch == 'C' || ch == 'd' || ch == 'D' || ch =='f' || ch=='F' || ch == 'g' || ch == 'G' || ch == 'h' || ch == 'H' || ch == 'j' || ch == 'J' || ch == 'k' || ch == 'K' || ch =='l' || ch=='L' || ch == 'm' || ch == 'M' || ch == 'n' || ch == 'N' || ch == 'p' || ch == 'P' || ch == 'q' || ch == 'Q' || ch =='r' || ch=='R' || ch == 's' || ch == 'S' || ch == 't' || ch == 'T' || ch == 'v' || ch == 'V' || ch == 'w' || ch == 'W' || ch =='x' || ch=='X' || ch == 'y' || ch == 'Y' || ch == 'z' || ch == 'Z')
        
printf("Consonant\n");
    
else
        
printf("Invalid");
    
}
