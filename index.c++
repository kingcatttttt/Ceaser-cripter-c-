#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int
main ()
{
  int index = 0;
  string input;

  cout << "Enter the message you want to encrypt: \n";
  getline (cin, input);
  cout << "The result of processing your message: \n";

  const int number = input.size ();
  char cipher[number - 1] = { };
  for (int i = 0; i < number; i++)

    {
      int symbol = input[index];
      symbol += 1;
      cipher[index] = symbol;
      index += 1;
    }
  cout << cipher << "(Ceaser cipher)\n";
  cout << "Decoder. The result of the decoding process: \n";

  int amount = strlen (cipher);
  char decipher[amount] = { };
  index += 1;
  for (int a = 0; a < amount; a++)
    {
      int mark = cipher[index];
      mark -= 1;
      decipher[index] = mark;
      cout << decipher[index];
      index += 1;
    }
  return (0);
}
