#include "std_lib_facilities.h" 
int main()
try {

 cout << "Success!\n"; 
 cout << "Success!\n";
 cout << "Success" << "!\n";
 cout << "Success!" << "\n";
 int res = 7; vector<int> v(10); v[5]= res; cout << "Success!\n";
 vector<int> z(10); z[5] = 7; if (z[5] == 7) cout << "Success!\n";

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