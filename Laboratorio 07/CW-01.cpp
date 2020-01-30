#include <iostream>
using namespace std;

struct node{
    node* next;
    int n;
    bool flag;
};

node* queue(node* list, int n);
void print(node* list, int i, int n);

int main(void){
    node* list = NULL;
    for(int i = 0; i<=20; i++){
        list = queue(list, i);
    }

    node * aux = list;

    while(aux->next)
        aux = aux->next;

    aux->next = list;
    return 0;

}

void print(node* list, int i, int n){
    if(i == 1 && list->n == n){
        return;
    }
    else{
        cout << list->n << endl;
        print(list->next, 1, n);
    }
}

node* queue(node* list, int n){
    node* newNode = new node;
    newNode->n = n;
    newNode->flag = true;
    newNode->next = NULL;

    if(!list)
    newNode->flag = false;

    node* aux = list;

    while(aux->next)
        aux = aux->next;

    return 0;
}