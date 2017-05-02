//
// Created by Eric Matthew Matias on 4/30/17.
//

#ifndef LAB6_ERICMATIAS_BINARYNODE_H
#define LAB6_ERICMATIAS_BINARYNODE_H
#include <memory>

template <class ItemType>
class BinaryNode
{
private:
    ItemType item;
    std::shared_ptr<BinaryNode<ItemType>> leftChildPtr;
    std::shared_ptr<BinaryNode<ItemType>> rightChildPtr;

public:
    BinaryNode();
    BinaryNode(const ItemType& anItem);
    BinaryNode(const ItemType& anItem,
               std::shared_ptr<BinaryNode<ItemType>> leftPtr,
               std::shared_ptr<BinaryNode<ItemType>> rightPtr);

    void setItem(const ItemType& anItem);
    ItemType getItem() const;

    bool isLeaf() const;

    auto getLeftChildPtr() const;
    auto getRightChildPtr() const;

    void setLeftChildPtr(std::shared_ptr<BinaryNode<ItemType>> leftPtr);
    void setRightChildPtr(std::shared_ptr<BinaryNode<ItemType>> rightPtr);
};

#endif //LAB6_ERICMATIAS_BINARYNODE_H
