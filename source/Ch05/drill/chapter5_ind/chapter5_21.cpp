#include "std_lib_facilities.h" 
int main()
try {

int x = 2; int y = x-1; double d = 5; if (d==2*(x+0.5)) cout << "Success!\n";

keep_window_open(); return 0;
}
catch (exception& e) {
cerr << "error: " << e.what() << '\n'; keep_window_open();
return 1;
}
catch (...) {
cerr << "Oops: unknown exception!\n"; keep_window_open();
return 2;
}