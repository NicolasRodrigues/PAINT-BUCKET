#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED
template <typename Tipo>
struct Node{
    Tipo info;
    Node<Tipo> *next;
};

template <typename Tipo>
struct Pilhaon{
    Node<Tipo> *topo;
    Pilhaon(){
        topo=NULL;
    }
    bool empilha(Tipo x){
        //1 ptr -> next
        bool t=false;
        Node<Tipo> *aux = new Node<Tipo>;
        if (aux != NULL){
            t = true;
            aux-> info=x;//2
            aux-> next=topo;//3
            topo=aux;
        }
        return t;
    }
    void desempilha(){
        //Tipo temp=topo->info;
        Node<Tipo> *aux = topo;
        delete aux;
        topo= topo->next;
        //return temp;
    }
    Tipo elementotop(){
        return topo->info;
    }
    bool pilhavazia(){
        return topo==NULL;
    }
    Node<Tipo> *getTopo(){
        return topo;
    }
    //talvez da merda
   /* bool pilhacheia(){
        return empilha();
    }*/




};


#endif // NODE_H_INCLUDED
