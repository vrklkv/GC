#include <fstream>
#include <iostream>

using namespace std;

int main() {
	int v, e, a, b, i;
	cin >> v >> e;
	ofstream input;
	input.open("input.dzn");
    input<<"E = [";

	for(i=0; i<e;i++){
		cin>>a>>b;
		input<<"|"<<a<<","<<b<<",";
	}
	input << "|];"<< endl;
	input<<"e = "<< e <<";"<<endl;
	input<<"v = "<< v <<";"<<endl;
	input.close();
	system("minizinc --solver Gecode solver.mzn input.dzn");
	return 0;
}