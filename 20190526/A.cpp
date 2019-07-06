#include<iostream>
#include<string>

using namespace std;


int main()
{
  int N;
  cin >> N;

  string city[N];
  int P[N];
  int ID[N];


  for(int i = 0; i < N; i++){
    string data_city;
    int data_P;

    cin >> data_city >> data_P;

    city[i] = data_city;
    P[i] = data_P;
    ID[i] = i+1;
  }

  for(int i = 0; i < N; i++){
    for(int j = i+1; j < N; j++){
      string Citytmp;
      int Ptmp;
      int itmp;
      if(city[i] > city[j]){
        Citytmp =  city[i];
        city[i] = city[j];
        city[j] = Citytmp;

        Ptmp =  P[i];
        P[i] = P[j];
        P[j] = Ptmp;

        itmp =  ID[i];
        ID[i] = ID[j];
        ID[j] = itmp;
      }
      if(city[i] == city[j]){
        if(P[i] < P[j]){
          Citytmp =  city[i];
          city[i] = city[j];
          city[j] = Citytmp;

          Ptmp =  P[i];
          P[i] = P[j];
          P[j] = Ptmp;

          itmp =  ID[i];
          ID[i] = ID[j];
          ID[j] = itmp;
        }
      }
    }
  }

  cout << endl;
  for(int i = 0; i < N; i++){
    cout << ID[i] << endl;
  }

  return 0;
}
