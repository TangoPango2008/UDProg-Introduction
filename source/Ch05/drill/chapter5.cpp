#include "std_lib_facilities.h" 
int main()
//try 
{
 cout << "Success!\n"; //1
 cout << "Success!\n";
 cout << "Success" << "!\n";
 cout << "Success!" << "\n";
 int res = 7; vector<int> v(10); v[5]= res; cout << "Success!\n"; //5
 vector<int> z(10); z[5] = 7; if (z[5] == 7) cout << "Success!\n";
 if (bool cond= true) cout << "Success!\n"; else cout << "Fail!\n";
 bool c = true; if (c) cout << "Success!\n"; else cout << "Fail!\n";
 string s = "ape"; bool c = ("fool">s); if (c) cout << "Success!\n";
 string s = "ape"; if (s!="fool") cout << "Success!\n"; //10
 string s = "ape"; if (s!="fool") cout << "Success!\n";
 string s = "ape"; if (s+"fool" == "apefool") cout << "Success!\n";
 vector<char> v(5); for (int i=4; 0<v.size(); ++i) cout << "Success!\n";
 vector<char> v(5); for (int i=5; i<=v.size(); ++i) cout << "Success!\n"; 
 string s = "Success!\n"; for (int i=0; i<=8; ++i) cout << s[i]; //15
 if (true) {cout << "Success!\n";} else cout << "Fail!\n";
 int x = 2000; int c = x; if (c==2000) cout << "Success!\n";
 string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];
 vector<int> v(1); for (int i=0; i<v.size(); ++i) cout << "Success!\n";
 int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n"; //20
 int x = 2; int y = x-1; double d = 5; if (d==2*(x+0.5)) cout << "Success!\n";
 string s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i];
 int i=0; while (i<10) ++j; if (j<i) cout << "Success!\n";
 int x = 4; double d = 5/(x–2); if (d=2*x+0.5) cout << "Success!\n"; 
 cout << "Success!\n"; //25
 }
 keep_window_open();
 return 0;

catch (exception& e) {
cerr << "error: " << e.what() << '\n'; keep_window_open();
return 1;
}
catch (...) {
cerr << "Oops: unknown exception!\n"; keep_window_open();
return 2;
}