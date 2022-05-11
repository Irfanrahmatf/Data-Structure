#include<iostream>
#include<vector>
#include<queue>
using namespace std;
//Untuk graf berarah , hapus kondisi kedua
void addEdge(vector<int>* graph,int u,int v)
{
	graph[u].push_back(v);
	graph[v].push_back(u);   // (2) Grafik Tidak Berarah
}
/*Function*/
int main()
{
	int n; //Simpul
	int e; //tepi
	int v,u; //from-to 
	cout<<"Masukkan Ukuran Simpul"<<endl;
	cin>>n;
	cout<<"Masukkan Ukuran Tepi"<<endl;
	cin>>e;
	int copy;
	copy=n; // copy
	int a[n+1]={0}; //array untuk node yang dikunjungi atau tidak
	vector<int> graph[n+1]; //untuk mengurutkan simpul
	for(int i=1;i<=e;i++)
	{
		cout<<"From ";
		cin>>u;
		cout<<"To ";
		cin>>v;
		addEdge(graph,u,v); //fungsi untuk menambahkan tepi
	}
	vector<int>::iterator it; 
	queue<int> q; //queue
	q.push(1); //awaln menyimpan elemen pertama dalam antrian
	a[1] = 1; 
	int x;
	cout<<"BFS is"<<endl;
	while(!q.empty())
	{
		x = q.front();
		q.pop();
		cout<<x<<" ";
		for(it=graph[x].begin();it!=graph[x].end();it++)
		{
			if(a[*it]!=1)
			{
				q.push(*it);
				a[*it]=1;
			}
		}
	}
	return 0;
}
