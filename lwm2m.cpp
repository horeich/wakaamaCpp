#include <iostream>
#include <vector>
#include <string>

#include "lwm2m_client.hpp"
#include "lwm2mClient.hpp"

using namespace std;

int main()
{
   vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

   for (const string& word : msg)
   {
      cout << word << " ";
   }
   cout << endl;
}