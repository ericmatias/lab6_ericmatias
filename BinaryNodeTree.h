//
// Created by Eric Matthew Matias on 4/30/17.
//

#ifndef LAB6_ERICMATIAS_BINARYNODETREE_H
#define LAB6_ERICMATIAS_BINARYNODETREE_H

#include "BinaryTreeInterface.h"
#include "BinaryNode.h"
#include "PrecondViolatedExcep.h"
#include "NotFoundException.h"
#include <memory>

template <class ItemType>
class BinaryNodeTree : public BinaryTreeInterface<ItemType>
{
private:
    std::shared_ptr<BinaryNode<ItemType>> rootPtr;

protected:
    int getHeightHelper(std::shared_ptr<BinaryNode<ItemType>> subTreePtr) const;
    int getNumberOfNodesHelper(std::shared_ptr<BinaryNode<ItemType>> subTreePtr) const;

    auto balancedAdd(std::shared_ptr<BinaryNode<ItemType>> subTreePtr,
                     std::shared_ptr<BinaryNode<ItemType>> newNodePtr);

    virtual auto removeValue(std::shared_ptr<BinaryNode<ItemType>> subTreePtr,
                             const ItemType target, bool& isSuccessful);

    auto moveValuesUpTree(std::shared_ptr<BinaryNode<ItemType>> subTreePtr);
    auto findNode(std::shared_ptr<BinaryNode<ItemType>> treePtr,
                          const ItemType& target, bool& isSuccessful) const;

    std::shared_ptr<BinaryNode<ItemType>> copyTree(const std::shared_ptr<BinaryNode<ItemType>> oldTreeRootPtr) const;
    void destroyTree(std::shared_ptr<BinaryNode<ItemType>> subTreePtr);

    void preorder(void visit(ItemType&), std::shared_ptr<BinaryNode<ItemType>> treePtr) const;
    void inorder(void visit(ItemType&), std::shared_ptr<BinaryNode<ItemType>> treePtr) const;
    void postorder(void visit(ItemType&), std::shared_ptr<BinaryNode<ItemType>> treePtr) const;

public:
    //-------------------------------------------------------------
    //          Constructor and Destructor Section.
    //-------------------------------------------------------------

    BinaryNodeTree();
    BinaryNodeTree(const ItemType& rootItem);
    BinaryNodeTree(const ItemType& rootItem,
                   const std::shared_ptr<BinaryNodeTree<ItemType>> leftTreePtr,
                   const std::shared_ptr<BinaryNodeTree<ItemType>> rightTreePtr);
    BinaryNodeTree(const std::shared_ptr<BinaryNodeTree<ItemType>>& tree);
    virtual ~BinaryNodeTree();

    //-------------------------------------------------------------
    //          Public Binary TreeInterface Methods Section.
    //-------------------------------------------------------------

    bool isEmpty() const;
    int getHeight() const;
    int getNumberOfNodes() const;
    ItemType getRootData() const throw(PrecondViolatedExcep);
    void setRootData(const ItemType& newData);
    bool add(const ItemType& newData);
    bool remove(const ItemType& data);
    void clear();
    ItemType getEntry(const ItemType& anEntry) const throw(NotFoundException);
    bool contains(const ItemType& anEntry) const;

    //-------------------------------------------------------------
    //          Public Traversals Section
    //-------------------------------------------------------------
    void preorderTraverse(void visit(ItemType&)) const;
    void inorderTraverse(void visit(ItemType&)) const;
    void postorderTraverse(void visit(ItemType&)) const;

    //-------------------------------------------------------------
    //          Overloaded Operator Section
    //-------------------------------------------------------------
    BinaryNodeTree& operator=(const BinaryNodeTree& rightHandSide);

};

#endif //LAB6_ERICMATIAS_BINARYNODETREE_H
