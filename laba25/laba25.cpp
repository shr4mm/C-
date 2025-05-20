#include <iostream>
#include <string>
using namespace std;
class BaseTree
{
    public:
    virtual void Draw(){}
    
};
class LineDraw : public BaseTree
{
	void Draw() override
	{
	    
	    cout << " /\\\n";
        cout << "//\\\\\n";
	}
};
class StarDraw : public BaseTree
{
	void Draw() override
	{
	    cout << " /\\\n";
        cout << "/**\\\n";
	}
};
class PlusDraw : public BaseTree
{
	void Draw() override
	{
	cout << " /\\\n";
    cout << "/++\\\n";
	}
};


int main() {
    BaseTree* trees[3];
    trees[0] = new LineDraw();
    trees[1] = new StarDraw();
    trees[2] = new PlusDraw();

    for (int i = 0; i < 3; ++i) {
        cout << "Drawing " << i + 1 << ":\n";
        trees[i]->Draw();
    }

    for (int i = 0; i < 3; ++i) {
        delete trees[i];
    }

    return 0;
}