#include <map>
#include <vector>
#include <string>
#include <istream>
#include <iostream>

using namespace std;

char* sign;

//open file
fileopen(char* name){
  iftream fin(name)
  return fin;
}

//make vertex (has alphabets and point)
make_vertex(istream vdata, float initpoint){ //アルファベットと値をもつmap

  map<char, int> vertex;

  vdata.getline(char length[10],10); //データの一行目を読む
  if(isdigit((int)length)){ //1行目が数字ならarrayをつくる
    char sign[char length];
  }
  else{
    cout << "cannot read This file." << endl;
    exit(1);
  }

  for(!vdata.eof()){//until eof
    int i=0;
    vdata.getline(sign[i], 10);
    vertex.insert(pair<char, int> (sign[i], initpoint));
    i++;
  }

  return vertex;
}


make_adjacencylist(ifstream edata){//隣接リスト
  map<char, vector<char>> adj_list;

  edata.getline(char length[10],10); //データの一行目を読む
  if(!isdigit((int)length)){ //1行目が数字じゃないとだめ
    cout << "cannot read This file." << endl;
    exit(1);
  }

  for(!edata.eof()){//until eof
   int i=0;
   char* edge;
   string edges;
   vdata.getline(edges, 10);
   edge = edges.c_str();

   vertex.insert(pair<char, int> (sign[i], initpoint));
  }

  return adj_list;
}


repeatcalc(map m, vector v, int times){
  int i;
  for(i=0;i<times+1,i++){
    //calc here
  }
}


int main(int argc, char const *argv[]) {
  FILE* fp;
  fp=fileopen(argv[1]);
  return 0;
}
