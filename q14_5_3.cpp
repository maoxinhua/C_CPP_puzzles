#include <iostream>

using namespace std;

const char * strstr1(const char *string, const char *substring)
{
  int i, j, length = strlen(substring);
  const char *p1 = string, *p2 = substring;
  bool found = false;
  cout << "strlen(string)=" << strlen(string) << endl;
  cout << "strlen(substring)=" << strlen(substring) << endl;
  for(i = 0; i <= strlen(string); i++)
  {
    cout << "loop 1: i == " << i << endl;
    for(j = 0; (j < strlen(substring)) && (string[i+j] == substring[j]) ; j++)
    {  
      cout << "loop 2: j == " << j << endl;
      printf("loop 2: string[i+j]=%c; substring[i+j]=%c\n", string[i+j], substring[j]);
    }
    if(j == strlen(substring) && (*(p2+j) == '\0'))
    {
      cout << "found = true" << endl;
      found = true;
      break;
    }

  }

  if(true == found)
  {
    return &string[i];
  }else
  {
    return NULL;
  }

}

int main(void)
{

  const char *string = "12345554555123";
  cout << string << endl;
  //  char substring[10] = {};
  //  cin >> substring;

  const char *substring = "234";
  cout << substring << endl;
  cout << strstr1(string, substring) << endl;

  return 0;
}

  
      
		       
