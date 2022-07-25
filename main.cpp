
#include "Task30__2.h"
#include <cpr/cpr.h>

using namespace std;

int main()
{
  std::string url = "http://httpbin.org/html";
  cpr::Response r = cpr::Get(cpr::Url(url), cpr::Header({ {"accept", "text/html"} }));
  size_t found =  r.text.find("<h1>");
  size_t found2 = r.text.find("</h1>");
  std::string str(r.text , found + 4, found2 - found - 4);
  std::cout << str << std::endl;
	return 0;
}
