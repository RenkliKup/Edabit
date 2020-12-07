#include <iostream>
using namespace std;
struct binary
{
	int x;
	binary* right;
	binary* left;
};
binary* ekle(binary* r, int data)
{
	if (r == NULL)
	{
		binary* root;
		root = new binary;
		root->x = data;
		root->left = NULL;
		root->right = NULL;
		return root;

	}
	if (data > r->x)
	{
		r->right = ekle(r->right, data);
		return r;
	}
	r->left = ekle(r->left, data);
	return r;
}
void dolas(binary*r)
{
	if (r == NULL)
	{
		return;
	}
	dolas(r->left);
	cout << r->x<<endl;
	dolas(r->right);

}
int arama(binary* r,int aranan)
{
	if (r == NULL)
	{
		return -1;
	}
	if (r->x == aranan)
	{
		return 1;
	}
	if (arama(r->left,aranan)==1)
	{
		return 1;
	}
	else if (arama(r->right,aranan)==1)
	{
		return 1;
	}
	else
	{
		return -1;
	}
	
	
	
}
int main()
{
	binary* root;
	root = NULL;
	for (size_t i = 0; i < 3; i++)
	{
		root = ekle(root, i+1);
	}
	dolas(root);
	cout << arama(root, 4);
	system("pause");
	
}