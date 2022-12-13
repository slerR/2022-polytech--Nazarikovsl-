#include "search_tree.h"

int main()
{
    auto* a = new Node{2, nullptr, nullptr};
    auto* b = new Node{1, nullptr, nullptr};
    auto* c = new Node{0, nullptr, nullptr};
    auto* d = new Node{10,nullptr, nullptr};
    
    a->left = b;
    a->left->left = c;
    a->right = d;
    
    symmetric(a);
    a->del(a,10);
    cout << endl << endl;
    symmetric(a);
    cout << endl << endl;
    int count = a->size(a);
    cout << count << endl << endl;
    Node* i = a->search(a, 0);
    cout << i->data << endl << endl;
    a->insert(a,4);
    symmetric(a);
    
    delete i;
    delete a;
    delete b;
    delete c;

    system("pause 0");
    return 0;
}