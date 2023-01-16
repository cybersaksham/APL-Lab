#include <bits/stdc++.h>
using namespace std;

class Box {
    int width;

public:
    void setWidth(int width) {
        if(width > 0) this->width = width;
        else cout << "Width must be positive" << endl;
    }
    
    friend void printWidth(Box);
};

void printWidth(Box b) {
	cout << "Width: " << b.width << endl;
};

int main() {
	Box b1;
	
	int w;
	cout << "Enter width: ";
	cin >> w;
	
	b1.setWidth(w);
	printWidth(b1);
	
    return 0;
}
