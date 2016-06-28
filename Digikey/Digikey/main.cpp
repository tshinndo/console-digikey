#include <string>
#include <Windows.h>

using namespace std;

int main(int argc, char* argv[]) {
	string url = "http://www.digikey.jp/product-search/ja?keywords=";
	if (argc >= 2) {
		url += argv[1];
	}
	HINSTANCE ret = ShellExecute(NULL, "open", url.c_str() , NULL, NULL, SW_SHOW);
	return 0;
}