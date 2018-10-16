#ifndef _BSTREE_H_
#define _BSTREE_H_

template <typename Comparable>
class BSTree{
public:
    BSTree();
    BSTree(const BSTree &rhs);
    ~BSTree();
    
    const Comparable &findMin() const;
    const Comparable &findMax() const;
    bool contains(const Comparable &x) const;
    bool isEmpty() const;
    void printTree() const;
    
    void makeEmpty();
    void insert(const Comparable &x);
    void remove(const Comparable &x);
    
    const BSTree &operator=(const BSTree &rhs);
    
private:
    struct BNode{
        Comparable value;
        BNode *left;
        BNode *right;
        
        BNode(const Comparable &theValue, BNode *lt, BNode *rt)
        :value(theValue), left(lt), right(rt){}
    };
    
    BNode *root;
    
    void insert(const Comparable &x, BNode *&t) const;
    void remove(const Comparable &x, BNode *&t) const;
    BNode *findMin(BNode *t) const;
    BNode *findMax(BNode *t) const;
    void makeEmpty(BNode *&t);
    void printTree(BNode *t) const;
    BNode *clone(BNode *t) const;
};

#endif