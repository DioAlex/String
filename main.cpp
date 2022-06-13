#include <iostream>
#include <string>
using namespace std;
  struct String{
  string data = "";
  public:
  void char_massive(){
  
    char arr[data.length()];
    for(int i = 0; i<sizeof(arr); i++){
      arr[i] = data[i];
      
    }
    for(int i = 0; i<sizeof(arr); i++){
      cout<<arr[i];
    
    
  }


  

  }
void string_double()
{
  cout<<endl;
  string obj;
  obj = data + " " + data;
  cout<<obj;

} 
void search_character(const char l[]){
  cout<<endl;
  int count = 0;
  for(int i=0; i<data.size(); i++){
    if (data[i] == l[0]){
      count++;
      
    }
  }
  cout<<data<<endl<<"Count: "<<count;
}
void get(string data){
  this -> data = data;
  
}
void print(){
  cout<<data<<"\n";
}
void reverse(){
  string str;
  int j = 0;
  for(int i=data.size(); i!=-1; i--){
    str[j] = data[i];
    j++;
      

    
  }
  for(int i=0; i<data.size()+1; i++){
    cout<<str[i];
    
  }
  cout<<endl;
}
void secret(){
  for(int i=0; i<data.size(); i++){
    cout<<data[i]<<endl;
  }
}
bool compare(string str){
  int count = 0;
  for(int i=0; i < data.size(); i++){
    if(data[i] == str[i]){
      count++;
      
    }
  }
  if(count == data.size() && count == str.size()){
    cout<< "True"<<endl;
    return true;
    
  }
  else{
    cout<<"False"<<endl;
    return false;
  }
}
void search_and_delete(const char l[]){
  int count = 0;
  string str;
  int j=0;
  for(int i=0; i<data.size(); i++){
    if(data[i] == l[0]){
      count++;
      

    }
    if(data[i] != l[0]){
      str[j] = data[i];
      cout<<str[j];
      j++;
      
    }
    
  }
  cout<<endl;
  cout<<"Count: "<<count<<endl;
  
  }
  
void rewrite(const char l[], const char m[] ){
  for(int i=0; i<data.size(); i++){
    if(data[i] == l[0]){
      data[i] = m[0];
      

    }
      
    }
     cout<<data; 
    
  }
  
  
  
void shorter(int l){
  string str;
  for(int i = 0; i<l;i++){
    str[i] = data[i];
  }
  for(int i = 0; i<l;i++){
    cout<<str[i];
  }
  
}


};

  

int main() {

  String aboba, aboba2;
  aboba.data = "amogus";
  // aboba.char_massive();
  // aboba.string_double();
  // aboba.search_character("g");
  // aboba2.get("man");
  // aboba2.print();
  // aboba.reverse();
  // aboba.secret();
  // aboba.compare("amogus");
  // aboba.compare("amogu");
  // aboba.search_and_delete("o");
  //aboba.rewrite("o", "#");
  // aboba.shorter(3);
  
  
  
  
  
  
  
}