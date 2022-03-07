#include <iostream>
#define tam 10

using namespace std;

typedef struct{
      int topo ;
      int item [tam] ;
}Pilha;

void iniciaPilha (Pilha &p) {
     p.topo = -1 ;
}

bool pilhaVazia(Pilha p){
    if(p.topo == -1 )
        return true;
    else
        return false;
}

bool pilhaCheia(Pilha p){
    if (p.topo == tam-1)
        return true;
    else
        return false;
}

void empilha(Pilha &p, int x){
    p.item[++p.topo]=x;
}

void mostraPilha(Pilha p){
	int i = 0;
	
	cout <<"Pilha"<< endl;
	
	while(i < tam){
		cout<<p.item[i] <<endl;
		i++;
	}
}


int main(){
	
    Pilha stack ;
   
    iniciaPilha (stack);
 
    if(pilhaVazia(stack))
        cout<<"A pilha esta vazia."<<endl;
    else
        cout<<"A pilha não esta vazia."<<endl;
        
    empilha(stack,0);
    empilha(stack,1);
    empilha(stack,2);
    empilha(stack,3);
    empilha(stack,4);
    empilha(stack,5);
    empilha(stack,6);
    empilha(stack,7);
    empilha(stack,8);
    empilha(stack,9);
    
    mostraPilha(stack);

    if(pilhaCheia(stack))
        cout<<"A pilha esta cheia."<<endl;
    else
        cout<<"A pilha não esta cheia.\n"<<endl;
 
    return 0;
}
