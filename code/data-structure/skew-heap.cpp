template<typename T>
struct node{
    node *l,*r;
    T v;
    node(T x):v(x){
        l=r=nullptr;
    }
};
node* merge(node* a,node* b){
    if(!a||!b) return a?:b;
//  min heap
    if(a->v>b->v) swap(a,b);
    a->r=merge(a->r,b);
    swap(a->l,a->r);
    return a;
}
