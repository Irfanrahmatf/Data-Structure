#include <iostream>
using namespace std;
bool A[10] [10];
void initialize()
{
    for(int i = 0;i < 10;++i)
        for(int j = 0;j < 10;++j)
            A[i][j] = false;
}
int main()
{
    int x, y, nodes, edges;
    initialize();       //Since there is no edge initially
    cout << "Masukkan jumlah Nodes"<<endl;
    cin  >> nodes;       //jumlah node
    cout << "Masukkan jumlah Edges"<<endl;
    cin  >> edges;       //jumlah tepi
    cout << "Masukkan Edges"<<endl;
    for(int i = 0;i < edges;++i)
    {
    	cout << "masuk dari ke:"<<endl;
        cin >> x >> y;
        A[x][y] = true; 
		A[y][x] = true;    //tanda tepi dari simpul x ke simpul y
    }
    for(int i=0;i<nodes;i++)
    {
    	for(int j=0;j<nodes;j++)
    	{
    		cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
      return 0;
    }
