#include <iostream>
using namespace std;



class FooString
{
	char* buf;
	char* buf1;

public:
	FooString(char*);
	void show();
	bool compare(FooString);
};

FooString::FooString(char* buf, char* buf1)

{
	this->buf = buf;
	this->buf1 = buf1;
}

void FooString::show()
{
	cout << buf;
	cout << buf1;
}

bool FooString::compare(FooString str)
{
	cin >> buf;
	cin >> buf1;
	int i = 0;

	while (buf[i] != '\0' && buf1[i] != '\0')
	{
		if (buf[i] != buf1[i]) return false;
		i++;
	}

	if (buf[i] != buf1[i]) return false;

	return true;
}


int main()
{
	char ch1[100], ch2[100];
	FooString str(ch1);
	str.show();
}