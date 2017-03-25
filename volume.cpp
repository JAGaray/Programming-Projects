#include <iostream>

using namespace std;

int	VolofPrism(int l, int w, int h);

int main() {

	int l, w, h, volume;

	cout << "Please enter a length." << endl;
	cin >> l;

	cout << "Please enter a width." << endl;
	cin >> w;

	cout << "Please enter a height." << endl;
	cin >> h;

	volume = VolofPrism(l, w, h);

	cout << "The volume of the prism is " << volume << endl;
}

int VolofPrism(int l, int w, int h) {
	return l*w*h;
}
