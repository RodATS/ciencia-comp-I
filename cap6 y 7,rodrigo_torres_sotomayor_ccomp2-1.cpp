//6.49
/*
#include <iostream>
using namespace std;

int tripleByValue(int numero){
	numero = numero * 3;
	return numero;
}

void tripleByReference(int &numero){
	numero = numero * 3;
	
}

int main(){
	int count = 3;
	
	cout<<count<<" Paso por valor: "<<tripleByValue(count)<<endl;
	cout<<count<<" Paso por referencia: ";
	tripleByReference(count);
	cout<< count <<endl;
} 
*/
/*
//7.13
#include <iostream>
using namespace std;

void print(int arr[],int tam){
	cout << "[ ";
	for (int i{0}; i<tam ; i++){
		cout << arr[i]<< " ";
	}
	cout <<"]"<<endl;
}

int eliminar_repetidos( int arr[],  int tam)
{
	int arr_arreglado[20];
	bool encontrado = 0;
	int indice = 1;
	int cantidad_agregados = 0;
	arr_arreglado[0] = arr[0];
	int p = 20;
	for(int i{1}; i<tam; i++)
	{
		for(int p{0}; p<tam; p++)
		{
			if (arr[i]==arr_arreglado[p])
			{
				encontrado=1;
				p=tam;
			}
		}
		if (encontrado == 0)
		{
			arr_arreglado[indice] = arr[i];
			indice++;
			cantidad_agregados++;
			}
		p=0;
		encontrado=0;
	}
	int lista_final[cantidad_agregados];
	for (int i{0}; i<=cantidad_agregados; i++)
	{
		lista_final[i] = arr_arreglado[i];
	}
	int tam_lista = sizeof(lista_final)/sizeof(lista_final[0]);
	print(lista_final, tam_lista);
}

	
int main(){
	int num;
	int arr[20];
	for (int i{0};i<20;i++){
		cout<<"Ingresa 1 numero del 10 al 100: ";
		cin >> num;
		if (num>=10 && num<=100)	arr[i] = num;
		else {
		cout << "El numero tiene que ser menor que 100 y mayor a 10"<<endl;
		i--;
	}
}
	cout <<endl;
	
	int tam = sizeof(arr)/sizeof(arr[0]);
	print(arr, tam);

	eliminar_repetidos(arr, tam);
	
	}


*/
/*
//7.14
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int> &vec,int tam){
	cout << "[ ";
	for (int i{0}; i<tam ; i++){
		cout << vec[i]<< " ";
	}
	cout <<"]"<<endl;
}

void eliminar_repetidos( vector<int> &lista)
{
	int tam = lista.size();
	
	vector <int> lista_final;
	bool buscador = 0;
	int j = 0;
	lista_final.push_back(lista[0]);
	int indice = 1;
	
	for(int i{1}; i<tam; i++)
	{
		while (j<indice)
		{
			if (lista_final[j]==lista[i])
			{
				buscador = 1;
				j = indice;
			}
			j++;
		}
		if (buscador== 0)
		{
			lista_final.push_back(lista[i]);
			indice++;
			}
		j=0;
		buscador = 0;
	}
	
	int tam_lista_final = lista_final.size();
	print(lista_final, tam_lista_final);
}

int main(){
	int num, cantidad;
	cantidad = 10;
	vector <int> lista;
	for (int i{0};i<cantidad;i++){
		cout<<"Ingresa 1 numero del 10 al 100: ";
		cin >> num;
		if (num>=10 && num<=100)	lista.push_back(num);
		else {
		cout << "El numero tiene que ser menor que 100 y mayor a 10"<<endl;
		i--;
		}	
}	
	cout <<endl;
	int tam_lista = lista.size();
	print(lista, tam_lista);
	eliminar_repetidos(lista);
}
*/

/*
//7.30
#include <iostream>
using namespace std;

void print(int arr[],int indice_ini, int indice_fin);

int main(){
	int arr[] = {8,9,6,1,3,2,5};
	int tam = sizeof(arr) / sizeof(arr[0]);
	int ini = 0;
	print(arr,ini, tam);
}

void print(int arr[], int indice_ini, int indice_fin){
	cout << "[ ";
	while (indice_ini != indice_fin-1){
		cout << arr[indice_ini]<<" ";
		indice_ini++;
	}
    cout << " ]" << endl;
}
*/
/*
//insertionsort
#include <iostream>
using namespace std;
void InsertionSort(int arr[], int tam);

void print(int arr[], int indice_ini, int indice_fin);

int main(){
	int L[] ={ 16 ,32 ,41, 21, 36, 24, 33, 35, 32, 1 };
	int tam = sizeof(L) / sizeof(L[0]);
	int ini = 0;
	print(L,ini, tam);
	InsertionSort(L, tam);
	
}

void print(int arr[], int indice_ini, int indice_fin){
	cout << "[ ";
	while (indice_ini != indice_fin-1){
		cout << arr[indice_ini]<<" ";
		indice_ini++;
	}
    cout << " ]" << endl;
}

void InsertionSort(int arr[], int tam){
	for (int i{1}; i<tam; i++){
		int key = arr[i];
		int j = i-1;
		while (j >= 0 && key < arr[j]){
			arr[j+1]= arr[j];
			j--;
		}
		arr[j+1]=key;
	}
	int ini = 0;
	print(arr,ini, tam);
}
*/

//QuickSort
#include <iostream>
using namespace std;
int partition(int arr[], int lim_i, int lim_d);

void QuickSort(int arr[], int i, int d);

void print(int arr[], int indice_ini, int indice_fin);

int main(){
	int L[] ={ 16 ,32 ,41, 21 };
	int tam = sizeof(L) / sizeof(L[0]);
	tam;
	int ini = 0;
	print(L,ini, tam);
	QuickSort( L, ini, tam);
	print(L,ini,tam);
}

int partition(int arr[], int lim_i, int lim_d){
	int pivote = arr[lim_i];
	int ini = lim_i;
	int fin = lim_d;
	while (ini < fin){
		while (fin >= lim_i && arr[fin]>pivote) fin--;
		while (ini <= lim_d && arr[ini]<=pivote) ini++;
		if (ini<=fin){
			int aux = arr[ini];
			arr[ini] = arr[fin];
			arr[fin] == aux;
			}
		}
	int temp = pivote;
	arr[lim_i] = arr[fin];
	arr[fin] = temp;
	return fin;
}

void QuickSort(int arr[], int i, int d
){
	if (i<d){
		int pos_pivot = partition( arr, i, d);
		QuickSort(arr, i, (pos_pivot-1));
		QuickSort(arr,(pos_pivot+1) , d);
		}
}

void print(int arr[], int indice_ini, int indice_fin){
	cout << "[ ";
	while (indice_ini != indice_fin){
		cout << arr[indice_ini]<<" ";
		indice_ini++;
	}
    cout << " ]" << endl;
}

