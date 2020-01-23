#include <iostream>
#include <string>
using namespace std;

struct node{
    string content, address;
    float weight;
    node* next;
};
typedef node* st;

int main(void){
    st pSt;

    return 0;
}

void push(st* pSt, string content, string address, float weight){
    //st pSt == NULL;
    node* newNode = new node;
    newNode->address = address;
    newNode->content = content;
    newNode->weight = weight;

    newNode->next = *pSt;
    *pSt = newNode;
}

node top(st* pSt){
    node aux;
    if(!(*pSt)){
        node aux;
        aux.address = "";
        aux.content = "";
        aux.weight = 0;
        aux.next = NULL;

        
    }
    else{
        aux.address = (*pSt)->address;
        aux.content = (*pSt)->content;
        aux.weight = (*pSt)->weight;
        aux.next = NULL;
    }
    return aux;
}

node pop(st* pSt){
    node aux;
    if(!(*pSt)){
        node aux;
        aux.address = "";
        aux.content = "";
        aux.weight = 0;
        aux.next = NULL;

        
    }
    else{
        aux.address = (*pSt)->address;
        aux.content = (*pSt)->content;
        aux.weight = (*pSt)->weight;
        aux.next = NULL;

        (*pSt) = (*pSt)->next;
    }
    return aux;
}

bool isEmpty(st* pSt){
    return (*pSt) == NULL;
}