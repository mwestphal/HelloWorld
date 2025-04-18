#include <iostream>

#include <windows.h>
#include <libloaderapi.h>

int main()
{
  WCHAR path[MAX_PATH] = L"not_exist.dll";
  LoadLibraryExW(path, NULL, 0);
  std::cout << "Hello world\n";
}
