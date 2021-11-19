#include "../../../std_lib_facilities.h"

namespace X {

	int var;
	void printf(){
		cout<< var <<'\n';
	}
}

namespace Y {

	int var;
	void printf(){
		cout<< var <<'\n';
	}
}

namespace Z {

	int var;
	void printf(){
		cout<< var <<'\n';
	}
}

int main() {

	x::var=7;
	x::print();
	using namespace Y;
	var =9;
	print();
	{
		using Z::var;
		using Z::print;
		var=11;
		print();
	}
	print();
	X::print();
}

