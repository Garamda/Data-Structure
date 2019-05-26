#ifndef __BINARY_TREE_H__
#define __BINARY_TREE_H__

typedef int BTData;

typedef struct _bTreeNode {
	BTData data;
	struct _bTreeNode * left;
	struct _bTreeNode * right;
}BTreeNode;

BTreeNode * MakeBTreeNode();
BTData GetData(BTreeNode * bt);
void setData(BTreeNode * bt, BTData data);

BTreeNode * GetLeftSubTree(BTreeNode * bt);
BTreeNode * GetRightSubTree(BTreeNode * bt);

void MakeLeftSubTree(BTreeNode * main, BTreeNode * sub);
void MakeRightSubTree(BTreeNode * main, BTreeNode * sub);

void PreorderTraverse(BTreeNode * bt);
void InorderTraverse(BTreeNode * bt);
void PostorderTraverse(BTreeNode * bt);

void DeleteTree(BTreeNode * bt);

#endif