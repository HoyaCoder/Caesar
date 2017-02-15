#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>

//* CS50 Caesar solution
//  Author James Meehan
//*


int main (int argc, string argv[]) 
{
  // check that proper command line argument was entered    
  if (argc != 2)
  {
      printf("O hai! Please enter a valid command line argument!!!\n");
      return 1;
  }
  
  // get plaintext string from user
  printf("plaintext: ");
  string s = get_string();
  
  // convert argv into int 
  int key = atoi(argv[1]);
  printf("ciphertext: ");
  
  // iterate through string and output ciphertext
  for (int i = 0; i < strlen(s); i++)
  {
 
  int cipherkey = key % 26;
 
    // check to see if character is a letter 
    if (s[i] < 65 || (s[i] > 90 && s[i] < 97) || s[i] > 122)
    {
      printf("%c", s[i]);
    }
      // output if character is a letter and doesn't need to wrap around
      else if (toupper(s[i]) + cipherkey <= 90)
      {
      printf("%c", s[i] + cipherkey);
      }
        // output if character is a letter and needs to wrap around
        else 
        {
        printf("%c", s[i] + cipherkey - 26);
        }
  }
  printf("\n");
  return 0;
}
